// 函数: sub_1420c97c0
// 地址: 0x1420c97c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48
sub_140d3a3a0(&var_48, nullptr)
int64_t var_40 = 0
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t arg_10
sub_140b58260(&arg_10, rdx, 1)
sub_140d3a3a0(&var_48, arg1)
int64_t rax = arg_10
int64_t var_40_1 = rax
int128_t result = zx.o(0)
int128_t var_38 = var_48
int32_t rcx_3
rcx_3.b = sub_140b5b8a0(rax.d, 0) == 0

if ((var_38:0xc.d != 0 | rcx_3.b) != 0)
    void* rax_2 = sub_140d3c6e0(&var_38)
    
    if (rax_2 != 0 && sub_140d1fd20(rax_2, var_38:8.q) != 0)
        int64_t* rax_4 = sub_140d3c6e0(&var_38)
        void* rax_5
        rax_5, result = sub_1423de540(data_143f5b298, rax_4, 1)
        
        if (rax_5 != 0)
            void* rcx_8 = *(rax_5 + 0x188)
            void* rdi_1
            
            if (rcx_8 == 0)
                rdi_1 = *(rax_5 + 0x300)
            else
                rdi_1 = *(rcx_8 + 0xc0)
            
            int128_t var_28 = var_38
            sub_1423e6b10(rdi_1, &arg_10, &var_28)
            int64_t arg_18 = arg_10
            result = sub_1423e6170(rdi_1, sub_1423dce10(rdi_1, &arg_18))

int64_t rcx_12 = *arg2

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return result
