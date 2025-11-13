// 函数: sub_1406f3c20
// 地址: 0x1406f3c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

uint32_t rax_1 = sub_1407751d0(arg1, arg3 + arg5, arg4)
int64_t* r14_1 = *arg1

if (i_1 != 0)
    int16_t* rbx_1 = arg2 + 0x12
    int32_t* rsi_1 = r14_1 + 0x12
    int32_t i
    
    do
        *r14_1 = *(rbx_1 - 0x12)
        *(rsi_1 - 0xa) = *(rbx_1 - 0xa)
        rax_1 = zx.d(rbx_1[-1])
        *(rsi_1 - 2) = rax_1.w
        *rsi_1 = 0xffffffff
        *(rsi_1 + 6) = 0
        *(rsi_1 + 0xe) = 0
        
        if (*(rbx_1 - 0xa) != 0)
            int32_t rdi_1 = *(rbx_1 + 0xe)
            
            if (rdi_1 s> 0)
                int16_t rax_4 = *rbx_1
                
                if (rax_4 == 0xffff)
                    if (rbx_1[-1] == 1)
                        *rbx_1 = 0
                        rax_4 = 0
                    else
                        void* rax_5 = sub_140761a70(&rbx_1[-5])
                        int16_t rcx_1 = *(rax_5 + 0x5c)
                        rax_4 = (*(rax_5 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
                        *rbx_1 = rax_4
                
                rax_1 = sx.d(rax_4)
                
                if (rdi_1 == rax_1)
                    int64_t rdi_2 = *(rbx_1 + 6)
                    sub_14074a0e0(r14_1)
                    rax_1 = memcpy(*(rsi_1 + 6), rdi_2, *(rsi_1 + 0xe))
        
        r14_1 = &r14_1[5]
        rsi_1 = &rsi_1[0xa]
        rbx_1 = &rbx_1[0x14]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
