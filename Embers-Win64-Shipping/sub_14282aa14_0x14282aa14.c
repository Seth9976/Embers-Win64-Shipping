// 函数: sub_14282aa14
// 地址: 0x14282aa14
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0xfffd
void* r14 = arg1

if (arg2 != 4)
    rbx = arg2

uint8_t arg_10

if (rbx u>= 0x80)
    char* rdx = &arg_10
    uint8_t rdi_2 = (rbx u>> 6).b
    
    if (rbx u>= 0x800)
        int64_t r15
        r15.b = rbx.b
        r15.b &= 0x3f
        r15.b |= 0x80
        uint8_t rsi_2 = (rbx u>> 0xc).b
        
        if (rbx u>= 0x10000)
            arg_10 = ((rbx u>> 0x12).b & 7) | 0xf0
            sub_14282a5ac(arg1, rdx)
            rdx = &arg_10
            rsi_2 = (rsi_2 & 0x3f) | 0x80
            arg1 = r14
        else
            rsi_2 = (rsi_2 & 0xf) | 0xe0
        
        arg_10 = rsi_2
        sub_14282a5ac(arg1, rdx)
        arg_10 = (rdi_2 & 0x3f) | 0x80
        sub_14282a5ac(r14, &arg_10)
        arg_10 = r15.b
    else
        arg_10 = (rdi_2 & 0x1f) | 0xc0
        sub_14282a5ac(arg1, rdx)
        rbx.b &= 0x3f
        rbx.b |= 0x80
        arg_10 = rbx.b
    
    arg1 = r14
else
    rbx.b &= 0x7f
    arg_10 = rbx.b

return sub_14282a5ac(arg1, &arg_10)
