// 函数: sub_140834c90
// 地址: 0x140834c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0)
    return 

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t arg_8
sub_140b58260(&arg_8, rdx, 1)
int64_t var_30_1 = sub_140873180()
int16_t var_24_1 = 0xffff
int64_t var_20_1 = 0
int64_t var_18_1 = 0
int64_t rax_2 = *(arg1 + 0x418)
int64_t var_38 = arg_8
int32_t var_28_1 = 0xffff0001
int64_t rax = (*(rax_2 + 0x30))(arg1 + 0x418, &var_38)

if (rax != 0)
    rax = sx.q(*rax)
    
    if (rax.d != 0xffffffff)
        char rcx_3
        
        if (rax.d s< 0 || rax.d s>= *(arg1 + 0x450))
            rcx_3 = 0
        else
            rcx_3 = 1
        
        if (rcx_3 != 0)
            void* rbx_2 = *(*(arg1 + 0x448) + (rax << 3))
            
            if (rbx_2 != 0)
                void* rax_3 = sub_140873180()
                void* rcx_5 = *(rbx_2 + 0x10)
                rax = sx.q(*(rax_3 + 0x38))
                
                if (rax.d s<= *(rcx_5 + 0x38) && *(*(rcx_5 + 0x30) + (rax << 3)) == rax_3 + 0x30)
                    sub_1407c9430(rbx_2, arg3)

if (var_20_1 != 0)
    sub_140a74f90(var_20_1)
