// 函数: sub_1406ad860
// 地址: 0x1406ad860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x7c) != arg2)
    sub_1406ad7b0(arg1, arg3)
    noreturn

char* rdx = *arg1
int64_t rax = arg1[2]

if (rdx != rax)
    if (*rdx == 0x5c)
        void* r8 = &rdx[1]
        rdx = r8
        
        if (r8 == rax)
            rdx = *arg1
        else
            char r9_1 = (arg1[0x10].d).b
            
            if (((r9_1 & 8) != 0 || *r8 - 0x28 u> 1)
                    && ((r9_1 & 0x10) != 0 || ((*r8 - 0x7b) & 0xfd) != 0))
                rdx = *arg1
    
    *arg1 = &rdx[1]

return sub_1406af960(arg1) __tailcall
