// 函数: sub_14058f120
// 地址: 0x14058f120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = avcodec_send_frame(arg1[1], arg1[5])
int32_t i_1 = i_2
void** rcx_3
char* rdx_2

if (i_2 s>= 0)
    int32_t i = avcodec_receive_packet(arg1[1], arg1[4])
    i_1 = i
    
    while (i == 0)
        av_packet_rescale_ts(arg1[4], *(arg1[1] + 0x64), *(arg1[8] + 0x18))
        *(arg1[4] + 0x24) = *arg1[8]
        i_1 = av_interleaved_write_frame(arg1[7], arg1[4])
        av_packet_unref(arg1[4])
        
        if (i_1 s< 0)
            rcx_3 = std::wcerr
            rdx_2 = "Fail to write video data to file: "
            goto label_14058f185
        
        i = avcodec_receive_packet(arg1[1], arg1[4])
        i_1 = i
    
    if (i_1 == 0xdfb9b0bb || i_1 == 0xfffffff5)
        i.b = 1
        return i
    
    rcx_3 = std::wcerr
    rdx_2 = "Fail to receive packet from the encoder: "
else
    void** rax = sub_140593a10(std::wcerr, "Fail to ")
    char* rdx_1 = "flush"
    
    if (arg1[5] != 0)
        rdx_1 = "send frame to"
    
    rcx_3 = sub_140593a10(rax, rdx_1)
    rdx_2 = " the encoder: "

label_14058f185:
void** rax_2 = sub_140593a10(rcx_3, rdx_2)
char* rbx_1 = *arg1
av_strerror(zx.q(i_1), rbx_1, 0x40)
std::wostream::operator<<(sub_140593c70(sub_140593a10(rax_2, rbx_1), 0x2e), sub_140593eb0)
class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> >* rax_5
rax_5.b = 0
return rax_5
