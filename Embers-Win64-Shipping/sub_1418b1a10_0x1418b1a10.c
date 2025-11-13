// 函数: sub_1418b1a10
// 地址: 0x1418b1a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_58
void*** var_50
uint128_t var_40
void*** arg_8

if (*(arg1 + 0x210) == 0)
    void*** rax_10 = j_sub_140a82f30(0xa0)
    void*** rcx_10 = nullptr
    
    if (rax_10 != 0)
        uint128_t zmm0_2 = data_142d3f670
        var_58 = nullptr
        var_40 = zmm0_2
        rcx_10 = sub_140d93040(rax_10, 0, arg4, &var_40, 0, 1)
    
    bool cond:1_1 = arg2[1].d == 0
    var_58 = rcx_10
    int16_t* rdi_1
    
    if (cond:1_1)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *arg2
    
    sub_140b58260(&arg_8, rdi_1, 1)
    void*** rax_12 = arg_8
    var_50 = rax_12
    int32_t r10_3 = sub_140b5ead0(rax_12.d) + var_50:4.d
    
    if (*(arg1 + 0x28) != *(arg1 + 0x54))
        void* rcx_14 = *(arg1 + 0x60)
        void* r8_6 = arg1 + 0x58
        
        if (rcx_14 != 0)
            r8_6 = rcx_14
        
        int32_t i = *(r8_6 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(r10_3)) << 2))
        
        if (i != 0xffffffff)
            int64_t r9_4 = *(arg1 + 0x20)
            
            do
                int64_t r8_7 = sx.q(i) * 3
                void* rdx_16 = r9_4 + (r8_7 << 3)
                
                if (*(r9_4 + (r8_7 << 3)) == arg_8)
                    if (i != 0xffffffff && rdx_16 != 0)
                        return i
                    
                    break
                
                i = *(rdx_16 + 0x10)
            while (i != 0xffffffff)
    
    return sub_1418aec00(arg1 + 0x20, r10_3, &arg_8, &var_58)

void*** rax = j_sub_140a82f30(0xa0)
int16_t* const rdi = &data_142d40450
void var_48
void*** rcx_2

if (rax == 0)
    rcx_2 = nullptr
else
    bool cond:2_1 = arg3[1].d == 0
    var_40 = data_142d3f670
    int16_t* rdx
    
    if (cond:2_1)
        rdx = &data_142d40450
    else
        rdx = *arg3
    
    rcx_2 = sub_140d93040(rax, *sub_140b58260(&var_48, rdx, 1), arg4, &var_40, 0, 1)

bool cond:3_1 = arg2[1].d == 0
var_50 = rcx_2
int16_t* rdx_2

if (cond:3_1)
    rdx_2 = &data_142d40450
else
    rdx_2 = *arg2

sub_140b58260(&arg_8, rdx_2, 1)
void*** rax_3 = arg_8
var_58 = rax_3
int32_t r10_1 = sub_140b5ead0(rax_3.d) + var_58:4.d

if (*(arg1 + 0x28) == *(arg1 + 0x54))
label_1418b1b64:
    sub_1418aec00(arg1 + 0x20, r10_1, &arg_8, &var_50)
else
    void* rcx_5 = *(arg1 + 0x60)
    void* r8_1 = arg1 + 0x58
    
    if (rcx_5 != 0)
        r8_1 = rcx_5
    
    int32_t rax_7 = *(r8_1 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(r10_1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_1418b1b64_1:
        sub_1418aec00(arg1 + 0x20, r10_1, &arg_8, &var_50)
    else
        int64_t r9_1 = *(arg1 + 0x20)
        void* rdx_7
        
        while (true)
            int64_t r8_2 = sx.q(rax_7) * 3
            rdx_7 = r9_1 + (r8_2 << 3)
            
            if (*(r9_1 + (r8_2 << 3)) == arg_8)
                break
            
            rax_7 = *(rdx_7 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_1418b1b64_2
        
        if (rax_7 == 0xffffffff || rdx_7 == 0)
        label_1418b1b64_2:
            sub_1418aec00(arg1 + 0x20, r10_1, &arg_8, &var_50)

int64_t* r14_1 = *(data_143e29f28 + 0x20)

if (arg3[1].d != 0)
    rdi = *arg3

return (*(*r14_1 + 0x68))(r14_1, &var_48, *sub_140b58260(&arg_8, rdi, 1))
