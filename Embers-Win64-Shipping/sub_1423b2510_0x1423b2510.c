// 函数: sub_1423b2510
// 地址: 0x1423b2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* i_1 = nullptr
int32_t var_50 = 0
sub_140d3c7c0(sub_1425b3980(), &i_1, 1)
int32_t arg_8

for (int64_t* i = i_1; i != &i[sx.q(var_50)]; i = &i[1])
    void* rbp_1 = *i
    
    if ((*(rbp_1 + 0xcc) & 1) == 0)
        void* rax_2 = *(rbp_1 + 0x20)
        
        if (rax_2 != 0)
            int64_t arg_18 = *(rax_2 + 0x18)
            int64_t arg_10
            int512_t zmm1_1 = PDBCommon::QueryLastError(&arg_10, &arg_18)
            j_sub_140b3db50()
            
            if (sub_140b404d0(&data_143de7d78, arg_10, zmm1_1) != 0)
                int64_t rax_5 = arg_10
                arg_18 = rax_5
                int32_t rsi_2 = sub_140b5ead0(rax_5.d) + arg_18:4.d
                void* rdi_1
                
                if (data_143a2ffb8 == data_143a2ffe4)
                label_1423b2686:
                    int32_t var_48
                    sub_140de7870(&data_143a2ffb0, &var_48)
                    int64_t* var_40
                    *var_40 = arg_10
                    int32_t rax_14 = var_48
                    var_40[1] = 0
                    var_40[2] = 0
                    var_40[3].d = 0xffffffff
                    sub_1408d7020(&data_143a2ffb0, &arg_8, rsi_2, var_40, rax_14, nullptr)
                    rdi_1 = (sx.q(arg_8) << 5) + data_143a2ffb0
                else
                    void* rcx_3 = data_143a2fff0
                    void* rax_11 = &data_143a2ffe8
                    
                    if (rcx_3 != 0)
                        rax_11 = rcx_3
                    
                    int32_t rax_12 = *(rax_11 + ((sx.q(data_143a2fff8 - 1) & sx.q(rsi_2)) << 2))
                    
                    if (rax_12 == 0xffffffff)
                        goto label_1423b2686
                    
                    void* r9_1 = data_143a2ffb0
                    int64_t rdx_6
                    
                    while (true)
                        rdx_6 = sx.q(rax_12) << 5
                        
                        if (*(r9_1 + rdx_6) == arg_10)
                            break
                        
                        rax_12 = *(r9_1 + rdx_6 + 0x18)
                        
                        if (rax_12 == 0xffffffff)
                            goto label_1423b2686
                    
                    if (rax_12 == 0xffffffff)
                        goto label_1423b2686
                    
                    rdi_1 = rdx_6 + r9_1
                    
                    if (rdi_1 == 0)
                        goto label_1423b2686
                
                int64_t rsi_3 = sx.q(*(rdi_1 + 0x10))
                int32_t rax_15 = (rsi_3 + 1).d
                *(rdi_1 + 0x10) = rax_15
                
                if (rax_15 s> *(rdi_1 + 0x14))
                    sub_1405a4d70(rdi_1 + 8)
                
                *(*(rdi_1 + 8) + (rsi_3 << 3)) = rbp_1

j_sub_140b3db50()
void**** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e7ecd8
    result_1[1] = sub_1423b2f30
    result_1[3] = sub_140a387b0()
    result = &data_142e7ed30
    *result_1 = &data_142e7ed30

if (result_1 != 0)
    sub_140599630(&data_143de8088, 1)
    int64_t* rax_19 = (*result_1)[6](result_1, &arg_8)
    int64_t rbp_2 = sx.q(data_143de8090)
    rbx = *rax_19
    int32_t rax_20 = (rbp_2 + 1).d
    data_143de8090 = rax_20
    
    if (rax_20 s> data_143de8094)
        sub_1405a4f90(&data_143de8088)
    
    result = (rbp_2 << 4) + data_143de8088
    *result = result_1
    result[1].d = 2

int64_t* i_2 = i_1
data_143f5a3e0 = rbx

if (i_2 == 0)
    return result

return sub_140a74f90(i_2)
