using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using lum_sdk;

namespace cs_winform_anycpu {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e) {
            api.set_tos_link("http://example.com/legal/sla");
            api.set_logo_link("https://1001freedownloads.s3.amazonaws.com/vector/thumb/76922/sailor_penguin.png");
            api.set_bg_color("#ffffffff");
            api.set_btn_color("#ff323232");
            api.set_txt_color("#ff000000");
            api.set_dlg_size(500);
            api.set_app_name("MyApp");
            api.set_peer_txt(api.peer_txt_t.I_AGREE);
            api.set_not_peer_txt(api.not_peer_txt_t.I_DISAGREE);
            api.set_choice_change_cb(()=>update_choice());
            api.init("win_myapp.example.com");
        }

        private void button2_Click(object sender, EventArgs e) {
            api.clear_choice();
        }

        private void update_choice(){
            int choice = api.get_choice();
            button3.Text = "Status: "+(choice==api.CHOICE_NONE ?
                "No Selection" : choice==api.CHOICE_PEER ? "Peer" :
                choice==api.CHOICE_NOT_PEER ? "Not Peer" : "Unknown");
        }
        private void button3_Click(object sender, EventArgs e) {
            update_choice();
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e) {
            api.uninit();
        }
    }
}
