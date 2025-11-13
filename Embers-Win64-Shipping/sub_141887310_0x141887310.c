// 函数: sub_141887310
// 地址: 0x141887310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x13])
*(arg1 + 0xf4)
int64_t* rdi

if (arg1[0x19].d == *(arg1 + 0xf4))
label_1418873a7:
    rdi.b = 0
else
    void* r9_1 = &arg1[0x1f]
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_6 =
        *(r9_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(arg1[0x21].d) - 1)) << 2))
    int32_t rcx_3 = rax_6
    
    if (rax_6 == 0xffffffff)
    label_1418873a7_1:
        rdi.b = 0
    else
        int64_t r9_2 = arg1[0x18]
        
        while (true)
            int64_t* r8_1 = sx.q(rcx_3) * 0x58
            
            if (*(r8_1 + r9_2) == arg2)
                break
            
            rcx_3 = *(r8_1 + r9_2 + 0x50)
            
            if (rcx_3 == 0xffffffff)
                goto label_1418873a7_2
        
        if (rcx_3 == 0xffffffff)
        label_1418873a7_2:
            rdi.b = 0
        else
            int64_t* rdi_2
            
            if (rax_6 == 0xffffffff)
            label_1418873fe:
                rdi_2 = nullptr
            else
                while (true)
                    rdi_2 = sx.q(rax_6) * 0x58 + r9_2
                    
                    if (*rdi_2 == arg2)
                        break
                    
                    rax_6 = rdi_2[0xa].d
                    
                    if (rax_6 == 0xffffffff)
                        goto label_1418873fe_1
                
                if (rax_6 == 0xffffffff)
                label_1418873fe_1:
                    rdi_2 = nullptr
            
            sub_140597df0(arg3, &rdi_2[1])
            arg3[2] = rdi_2[3]
            arg3[3] = rdi_2[4]
            *(arg3 + 0x20) = *(rdi_2 + 0x28)
            arg3[6].d = rdi_2[7].d
            *(arg3 + 0x34) = *(rdi_2 + 0x3c)
            sub_140597df0(&arg3[7], &rdi_2[8])
            rdi.b = 1

if (arg1 != -0x98)
    LeaveCriticalSection(&arg1[0x13])

return zx.q(rdi.b)
