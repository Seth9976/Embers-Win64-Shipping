// 函数: sub_141f26010
// 地址: 0x141f26010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rdi_1 = sx.q(arg2)
int32_t r8 = arg1[0x82].d

if (r8 s<= rdi_1.d)
label_141f2605c:
    sub_141f07540(&arg1[0x81], rdi_1.d - r8 + 1)
label_141f26064:
    
    if (arg3 != 0)
        void* rax_1 = sub_142542e20()
        void* rdx_3 = arg3[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            if (*(arg1[0x81] + (rdi_1 << 3)) == 0)
                arg1[0x85].b |= 2
        else
            int64_t rdx_4 = arg1[0x81]
            
            if (arg3[0x1a] != *(rdx_4 + (rdi_1 << 3)) || *(rdx_4 + (rdi_1 << 3)) == 0)
                arg1[0x85].b |= 2
    
    *(arg1[0x81] + (rdi_1 << 3)) = arg3
    sub_141ee8490(arg1)
    
    if (arg3 != 0)
        sub_140d18150(arg3, arg1, 1)
    
    void* rax = (*(*arg1 + 0x6a8))(arg1, 0, 1)
    
    if (rax != 0 && sub_14221b2f0(rax).b != 0)
        sub_1422274a0(rax)
else if (*(arg1[0x81] + (rdi_1 << 3)) != arg3)
    if (r8 s> rdi_1.d)
        goto label_141f26064
    
    goto label_141f2605c
