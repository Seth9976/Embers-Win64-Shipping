// 函数: sub_14093deb0
// 地址: 0x14093deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140b58170(&arg_10, "OnlineSubsystem", 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax, zmm1) == 0)
    return 0

void var_20
int64_t rbx_1 = *sub_140b58170(&var_20, "OnlineSubsystem", 1)
j_sub_140b3db50()
void* rax_3 = sub_140b3da90(&data_143de7d78, rbx_1)
int64_t var_28 = *arg1
arg_10 = 0
int64_t arg_18 = 0
int64_t arg_20
sub_140942250(rax_3, &arg_20, &var_28, &arg_10, &arg_18)
int64_t* result

if (arg_10 != 0)
    int64_t* rcx_8
    
    if (*(rax_3 + 0xc0) == *(rax_3 + 0xec))
    label_14093dfce:
        rcx_8 = nullptr
    else
        int64_t rbx_2 = arg_20
        int32_t rax_6 = sub_140b5ead0(rbx_2.d) + arg_20:4.d
        void* r8_1 = rax_3 + 0xf0
        void* rcx_5 = *(r8_1 + 8)
        
        if (rcx_5 != 0)
            r8_1 = rcx_5
        
        int32_t rax_8 = *(r8_1 + (((sx.q(*(rax_3 + 0x100)) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_14093dfce_1:
            rcx_8 = nullptr
        else
            while (true)
                rcx_8 = (sx.q(rax_8) << 5) + *(rax_3 + 0xb8)
                
                if (*rcx_8 == rbx_2)
                    break
                
                rax_8 = rcx_8[3].d
                
                if (rax_8 == 0xffffffff)
                    goto label_14093dfce_2
            
            if (rax_8 == 0xffffffff)
            label_14093dfce_2:
                rcx_8 = nullptr
    
    result = &rcx_8[1]
    
    if (rcx_8 == 0)
        result = nullptr
    
    if (result != 0 && *result != 0)
        result.b = 1
        return result

result.b = 0
return result
