// 函数: sub_1422cf5a0
// 地址: 0x1422cf5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdx = arg1[1]
int32_t rcx = rdx[1].d

if (arg2 s> rcx)
    return sub_140cd78f0(arg1, arg2 - rcx) __tailcall

if (arg2 s>= rcx)
    return 

int32_t i_2 = rcx - arg2

if ((*(*arg1 + 0x40) & 0x1040000000) == 0)
    void* rbx_1
    
    if (rcx != 0)
        void* rcx_3 = *rdx
        
        if ((not.b(*(arg1 + 0x14)) & 1) == 0 && (rcx_3.b & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + rdx
        
        rbx_1 = sx.q(arg1[2].d * arg2) + rcx_3
    else
        rbx_1 = nullptr
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t* rcx_5 = *arg1
            
            if ((not.b((rcx_5[8] u>> 0x24).b) & 1) != 0)
                (*(*rcx_5 + 0xe8))(rcx_5, rbx_1)
            
            rbx_1 += sx.q(arg1[2].d)
            i = i_1
            i_1 -= 1
        while (i != 1)

int64_t* var_18 = arg1
int32_t var_10_1 = arg2
int32_t i_3 = i_2
sub_140cd32c0(arg1, &var_18)
