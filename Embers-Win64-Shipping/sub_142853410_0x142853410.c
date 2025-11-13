// 函数: sub_142853410
// 地址: 0x142853410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* arg_18 = nullptr
int32_t rbp = 1
int64_t rax = sub_142898e00(arg1, sub_142854c80)
int64_t* rax_1 = sub_14289a500(&data_143507b90)

if (rax_1 != 0)
    if (sub_142899cf0(rax_1, 0x6c, 3, arg2) == 0)
    label_142853481:
        rbp = 0
    else
        if (sub_1428a3d00(rax_1, &arg_18, 0, nullptr, arg3) != 0)
            int64_t i
            
            do
                int64_t rax_5 = sub_1428a3930(arg_18)
                
                if (rax_5 == 0)
                    goto label_142853481_1
                
                int64_t rax_6
                int512_t zmm1
                rax_6, zmm1 = sub_1428abf10(rax_5)
                
                if (rax_6 == 0)
                    goto label_142853481_1
                
                if (sub_1428989f0(arg1, rax_6) s< 0)
                    if (sub_142898d50(arg1, rax_6) == 0)
                        sub_1428abf30(rax_6)
                        goto label_142853481_1
                else
                    sub_1428abf30(rax_6)
                
                i = sub_1428a3d00(rax_1, &arg_18, 0, nullptr, zmm1)
            while (i != 0)
        
        sub_1428a49e0()
else
    sub_1428a5670(0x14, 0xd8, 0x41, "ssl\ssl_cert.c", 0x2b6)
label_142853481_1:
    rbp = 0

sub_142899e70(rax_1)
sub_1428a2c50(arg_18)
sub_142898e00(arg1, rax)
return zx.q(rbp)
