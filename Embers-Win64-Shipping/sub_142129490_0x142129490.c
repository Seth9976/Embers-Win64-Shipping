// 函数: sub_142129490
// 地址: 0x142129490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg4)
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5570(arg2, 0)

int32_t i_1 = arg3[1].d
int64_t* rbx = *arg3

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405a5410(arg3, 0)

int64_t* rbx_1 = arg1
void* result

if (arg1 == 0)
label_14212954e:
    int64_t* rax_5 = (*(*arg1 + 0x260))(arg1)
    
    if (rax_5 == 0)
        int64_t* rax_6 = sub_14210f630(0)
        return (*(*rax_6 + 0x2a8))(rax_6, arg2, arg3, zx.q(r15.d), arg5)
    
    int64_t r9 = *rax_5
    result = (*(r9 + 0x2e0))(rax_5, zx.q(arg5), zx.q(r15.d), r9)
    
    if (result != 0)
        return sub_142128870(arg1, result, arg2, arg3)
else
    while (true)
        if ((rbx_1[0x1b].b & 1) != 0)
            result = sx.q(arg5)
            int64_t* rdx_3 = rbx_1[result + (r15 << 2) + 0x73]
            
            if (rdx_3 != 0)
                return sub_142128870(arg1, rdx_3, arg2, arg3)
            
            break
        
        rbx_1 = rbx_1[0x1a]
        
        if (rbx_1 == 0)
            goto label_14212954e
        
        void* rax_1 = sub_142543020()
        void* rdx = rbx_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38))
            goto label_14212954e
        
        if (*(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            goto label_14212954e

return result
