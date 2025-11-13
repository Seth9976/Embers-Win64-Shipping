// 函数: sub_1423f1f10
// 地址: 0x1423f1f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
label_1423f1f38:

if (rdi s< 0 || rdi s>= *(arg1 + 0xc40))
    return 

int64_t rcx_2 = *(*(*(arg1 + 0xc38) + (sx.q(rdi) << 3)) + 0x218)

if (rcx_2 != 0)
    int64_t* rax_1 = sub_140a3f490(rcx_2)
    int64_t* rcx_3 = *rax_1
    int64_t* rdx = rcx_3
    void* r9 = &rcx_3[sx.q(rax_1[1].d)]
    
    if (rcx_3 != r9)
        while (*rdx != arg2)
            rdx = &rdx[1]
            
            if (rdx == r9)
                rdi += 1
                goto label_1423f1f38
        
        if (rcx_3 != r9)
            while (true)
                int64_t* r8 = *rcx_3
                
                if (r8 != 0 && r8 != arg2 && r8[0x17].d == arg4)
                    (*(*r8 + 0x2a0))(r8, zx.q(arg3))
                    break
                
                rcx_3 = &rcx_3[1]
                
                if (rcx_3 == r9)
                    goto label_1423f1fb6
            
            return 

label_1423f1fb6:
