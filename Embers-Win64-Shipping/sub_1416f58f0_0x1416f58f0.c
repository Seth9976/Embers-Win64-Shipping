// 函数: sub_1416f58f0
// 地址: 0x1416f58f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = *arg2
char rax

if ((arg1[5].b & 1) == 0)
    rax = rdi[8].b
else
    rax = 0

int64_t* rcx = arg1[1]
char arg_8 = rax
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg1 + 0x150))(arg1, &arg_8, 1)
else
    arg_8 = *rdx
    *rcx += 1

uint32_t rcx_2 = zx.d(arg_8)
void*** rax_5

if (rcx_2 == 0)
    if ((arg1[5].b & 1) != 0)
        void*** rax_8 = j_sub_140a82f30(0x1b0)
        
        if (rax_8 != 0)
            rax_5 = sub_141703350(rax_8)
        label_1416f59e3:
            
            if (rax_5 != 0)
                rdi = rax_5
                *arg2 = rax_5
else if (rcx_2 == 1)
    if ((arg1[5].b & 1) != 0)
        void*** rax_7 = j_sub_140a82f30(0x228)
        
        if (rax_7 != 0)
            rax_5 = sub_141703df0(rax_7)
            goto label_1416f59e3
else if (rcx_2 == 2)
    if ((arg1[5].b & 1) != 0)
        void*** rax_6 = j_sub_140a82f30(0x420)
        
        if (rax_6 != 0)
            rax_5 = sub_1417041e0(rax_6)
            goto label_1416f59e3
else if (rcx_2 == 3 && (arg1[5].b & (rcx_2 - 2).b) != 0)
    void*** rax_4 = j_sub_140a82f30(0x510)
    
    if (rax_4 != 0)
        rax_5 = sub_141703fd0(rax_4)
        goto label_1416f59e3
return (*rdi)[1](rdi, arg1)
