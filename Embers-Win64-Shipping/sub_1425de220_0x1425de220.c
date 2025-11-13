// 函数: sub_1425de220
// 地址: 0x1425de220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x30)
uint64_t rdi = sx.q(*(arg1 + 0x38))
void* rbp_2 = &rbx[rdi * 2]

if (rbx != rbp_2)
    do
        int64_t* rcx
        
        if (rbx[1].d == 0)
            rcx = nullptr
        else
            rcx = *rbx
        
        (*(*rcx + 0x48))(rcx, arg2, arg3)
        rbx = &rbx[2]
    while (rbx != rbp_2)
    
    rdi = zx.q(*(arg1 + 0x38))

int32_t result = *(arg1 + 0x3c)
int64_t* rbx_1 = *(arg1 + 0x30)

if (result s< 0)
    if (rdi.d != 0)
        int32_t i
        
        do
            sub_140745b20(rbx_1)
            rbx_1 = &rbx_1[2]
            i = rdi.d
            rdi = zx.q(rdi.d - 1)
        while (i != 1)
        result = *(arg1 + 0x3c)
    
    *(arg1 + 0x38) = 0
    
    if (result != 0)
        return sub_1405a5410(arg1 + 0x30, 0)
else
    if (rdi.d != 0)
        int32_t i_1
        
        do
            result = sub_140745b20(rbx_1)
            rbx_1 = &rbx_1[2]
            i_1 = rdi.d
            rdi = zx.q(rdi.d - 1)
        while (i_1 != 1)
    
    *(arg1 + 0x38) = 0

return result
