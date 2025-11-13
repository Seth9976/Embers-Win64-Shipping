// 函数: sub_14062f4d0
// 地址: 0x14062f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi

if (arg1[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg1

int64_t* rcx = data_143db18d0
int64_t r8
int512_t result

if (rcx == 0)
    r8, result = sub_140a53c40()
    rcx = data_143db18d0

r8.b = 1
int64_t* rax_1 = (*(*rcx + 0xb0))(rcx, rdi, r8)

if (rax_1 != 0)
    int64_t rdx_1 = *rax_1
    int128_t* rax_2 = (*(rdx_1 + 0x60))(rax_1, rdx_1)
    
    if (rax_2 != 0)
        int64_t rcx_2 = *arg1
        int128_t zmm6 = *rax_2
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        result.o = zmm6
        return result

int64_t rcx_3 = *arg1

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

result.o = zx.o(0)
return result
