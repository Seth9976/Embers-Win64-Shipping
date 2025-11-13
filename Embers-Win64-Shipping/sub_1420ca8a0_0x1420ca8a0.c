// 函数: sub_1420ca8a0
// 地址: 0x1420ca8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
sub_140d3a3a0(&var_38, nullptr)
int64_t var_30 = 0
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t arg_10
sub_140b58260(&arg_10, rdx, 1)
sub_140d3a3a0(&var_38, arg1)
int64_t rax = arg_10
int64_t var_30_1 = rax
void* rdi
rdi.b = 0
int128_t var_28 = var_38
int32_t rcx_3
rcx_3.b = sub_140b5b8a0(rax.d, 0) == 0

if ((var_28:0xc.d != 0 | rcx_3.b) != 0)
    void* rax_2 = sub_140d3c6e0(&var_28)
    
    if (rax_2 != 0 && sub_140d1fd20(rax_2, var_28:8.q) != 0)
        int64_t* rax_4 = sub_140d3c6e0(&var_28)
        void* rax_5 = sub_1423de540(data_143f5b298, rax_4, 1)
        
        if (rax_5 != 0)
            void* rcx_8 = *(rax_5 + 0x188)
            
            if (rcx_8 == 0)
                rdi = *(rax_5 + 0x300)
            else
                rdi = *(rcx_8 + 0xc0)
            
            int128_t var_18 = var_28
            sub_1423e6b10(rdi, &arg_10, &var_18)
            int64_t arg_18 = arg_10
            rdi.b = sub_1423dce10(rdi, &arg_18) != 0

int64_t rcx_11 = *arg2

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return zx.q(rdi.b)
