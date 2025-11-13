// 函数: sub_141d37530
// 地址: 0x141d37530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_10
int64_t rbx = *sub_140b58170(&arg_10, "ChaosSolvers", 1)
j_sub_140b3db50()
sub_140780c40(arg1 + 0x18, sub_140b3da90(&data_143de7d78, rbx) + 0x40)
*(arg1 + 0x44)
*(arg1 + 0x44) = 1
int64_t* rcx_2 = *(arg1 + 0x50)
(*(*rcx_2 + 0x18))(rcx_2)
int64_t* rcx_3 = *(arg1 + 0xc8)
int32_t zmm0 = (zx.o(0)).d
int32_t arg_8 = 0
(*(*rcx_3 + 8))(zmm0)
int64_t var_78 = 0
int64_t var_70 = 0
bool z

if (0 == *(arg1 + 0x44))
    *(arg1 + 0x44) = 0
    z = true
else
    *(arg1 + 0x44)
    z = false

if (not(z))
    bool z_1
    
    do
        int64_t* rcx_4 = *(arg1 + 0x48)
        (*(*rcx_4 + 0x30))(rcx_4)
        int64_t* rcx_5 = *(arg1 + 0xc8)
        int64_t r9_1 = (*(*rcx_5 + 0x18))(rcx_5)
        int32_t rdx_2 = *(arg1 + 0x20)
        int32_t rdi_1 = 0
        int32_t rcx_6 = var_70:4.d
        arg_8 = zmm0
        var_70.d = 0
        
        if (rdx_2 s> rcx_6)
            r9_1 = sub_1405c5570(&var_78, rdx_2)
            rcx_6 = var_70:4.d
            rdi_1 = var_70.d
        
        int64_t r14_1 = 0
        int64_t* rsi_1 = *(arg1 + 0x18)
        uint64_t r15_2 = sx.q(*(arg1 + 0x20)) << 3 u>> 3
        
        if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x20))])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                void* rbx_1 = *rsi_1
                *(rbx_1 + 0x3e8)
                
                if (*(rbx_1 + 0x448) + *(rbx_1 + 0x438) + *(rbx_1 + 0x428) + *(rbx_1 + 0x418)
                        + *(rbx_1 + 0x408) + *(rbx_1 + 0x3f8) != neg.d(*(rbx_1 + 0x3e8)))
                    var_70.d = rdi_1 + 1
                    
                    if (rdi_1 + 1 s> rcx_6)
                        r9_1 = sub_1405a4d70(&var_78)
                    
                    *(var_78 + (sx.q(rdi_1) << 3)) = rbx_1
                    rcx_6 = var_70:4.d
                    rdi_1 = var_70.d
                
                rsi_1 = &rsi_1[1]
                r14_1 += 1
            while (r14_1 != r15_2)
        
        void* var_50_1 = arg1
        int64_t* var_58 = &var_78
        int32_t* var_48_1 = &arg_8
        int64_t** var_60_1 = &var_58
        int64_t (* var_68)(int64_t* arg1, int32_t* arg2) = sub_141d35c30
        zmm0 = sub_1417487a0(rdi_1, &var_68, 0, r9_1)
        int64_t* rcx_11 = *(arg1 + 0xc8)
        (*(*rcx_11 + 0x10))(rcx_11)
        int64_t* rcx_12 = *(arg1 + 0xc8)
        (*(*rcx_12 + 0x20))(rcx_12)
        
        if (0 == *(arg1 + 0x44))
            *(arg1 + 0x44) = 0
            z_1 = true
        else
            *(arg1 + 0x44)
            z_1 = false
    while (not(z_1))

int64_t* rcx_13 = *(arg1 + 0x50)
int64_t result = (*(*rcx_13 + 0x10))(rcx_13)
int64_t rcx_14 = var_78

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
