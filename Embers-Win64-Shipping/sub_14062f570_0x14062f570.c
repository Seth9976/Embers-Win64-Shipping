// 函数: sub_14062f570
// 地址: 0x14062f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi

if (arg1[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg1

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* rax_1 = (*(*rcx + 0xb0))(rcx, rdi, r8)

if (rax_1 != 0)
    int64_t rdx_1 = *rax_1
    int32_t* rax_2 = (*(rdx_1 + 0x58))(rax_1, rdx_1)
    
    if (rax_2 != 0)
        int64_t rcx_2 = *arg1
        int32_t rdi_1 = *rax_2
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        return zx.q(rdi_1)

int64_t rcx_3 = *arg1

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return 0
