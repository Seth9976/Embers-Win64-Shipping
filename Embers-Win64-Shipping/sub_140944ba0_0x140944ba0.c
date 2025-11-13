// 函数: sub_140944ba0
// 地址: 0x140944ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rbp
rbp.b = 0
int16_t* var_30
sub_140b63b70(&arg_10, &var_30)
int16_t* const rdx_1 = &data_142d40450
int64_t arg_18 = 0
int32_t var_28

if (var_28 != 0)
    rdx_1 = var_30

void var_38

if (sub_140941920(sub_140b58260(&var_38, rdx_1, 1), &arg_18) != 0)
    int64_t arg_20
    int512_t zmm1_1 = sub_14093ffd0(&arg_20, &var_30, &arg1[0x2b])
    j_sub_140b3db50()
    int64_t rbx_1 = arg_20
    
    if (sub_140b404d0(&data_143de7d78, rbx_1, zmm1_1) == 0)
        sub_140b407e0(&data_143de7d78, rbx_1)
    
    if (sub_140b3da90(&data_143de7d78, rbx_1) != 0)
        int64_t rbx_2 = arg_10
        *(arg1 + 0x9c)
        
        if (arg1[0xe].d != *(arg1 + 0x9c))
            arg_18 = rbx_2
            int32_t rax_7 = sub_140b5ead0(rbx_2.d) + arg_18:4.d
            void* r8_2 = &arg1[0x14]
            void* rcx_5 = *(r8_2 + 8)
            
            if (rcx_5 != 0)
                r8_2 = rcx_5
            
            int32_t i = *(r8_2 + (((sx.q(arg1[0x16].d) - 1) & sx.q(rax_7)) << 2))
            
            if (i != 0xffffffff)
                int64_t r8_3 = arg1[0xd]
                
                do
                    int64_t rdx_10 = sx.q(i) * 3
                    
                    if (*(r8_3 + (rdx_10 << 3)) == rbx_2)
                        if (i != 0xffffffff && (*(*arg1 + 0x50))(arg1, arg_10) != 0)
                            rbp.b = 1
                            arg1[1] = arg_10
                        
                        break
                    
                    i = *(r8_3 + (rdx_10 << 3) + 0x10)
                while (i != 0xffffffff)

int16_t* rcx_8 = var_30

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(rbp.b)
