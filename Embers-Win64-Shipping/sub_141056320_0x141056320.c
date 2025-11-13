// 函数: sub_141056320
// 地址: 0x141056320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* var_1c0 = nullptr
int32_t rbx = 0
int32_t rdi = 0
void* rax_2 = **(arg1 + 0x20)
int32_t rsi = 0
int64_t* rcx = *(rax_2 + 0x4d8)
int64_t r9_1 = *rcx
int32_t result = (*(r9_1 + 0x38))(rcx, zx.q(*(rax_2 + 0x58)), &var_1c0, r9_1)

if (result s>= 0)
    int64_t* rcx_1 = var_1c0
    void var_178
    int32_t rax_4 = (*(*rcx_1 + 0x40))(rcx_1, &var_178)
    int64_t* var_1d0
    int64_t* var_1b8
    
    if (rax_4 s< 0)
        var_1b8 = nullptr
        var_1d0 = &var_1b8
        int64_t var_1b0_1 = 0
        sub_14106a020(rax_4, "Adapter->GetDesc(&AdapterDesc)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RHI.cpp", 0x17c, 
            nullptr)
    
    int32_t r14_1 = 0
    
    while (true)
        int64_t* rcx_3 = var_1c0
        var_1b8 = nullptr
        result = (*(*rcx_3 + 0x38))(rcx_3, zx.q(r14_1), &var_1b8)
        
        if (result == 0x887a0002)
            int64_t* rcx_15 = var_1b8
            
            if (rcx_15 != 0)
                result = (*(*rcx_15 + 0x10))(rcx_15)
        else
            if (result s< 0)
                goto label_14105657e
            
            int64_t* rcx_4 = var_1b8
            int32_t i_3 = 0
            int64_t r9_3
            result, r9_3 = (*(*rcx_4 + 0x40))(rcx_4, 0x1c, 0, &i_3, 0, var_1d0, i_3)
            
            if (result == 0x887a0002)
                goto label_14105657e
            
            if (result == 0x887a0022)
                sub_140af98a0("Unknown", 0x19b, 
                    This application cannot be run over a remote desktop configuration", r9_3)
                result = sub_140afbb40()
            label_14105657e:
                int64_t* rcx_11 = var_1b8
                
                if (rcx_11 != 0)
                    result = (*(*rcx_11 + 0x10))(rcx_11)
                
                break
            
            uint64_t i_4 = zx.q(i_3)
            int64_t rax_7 = 0x1c * i_4
            
            if (mulu.dp.q(0x1c, i_4) u>> 0x40 != zx.o(0))
                rax_7 = -1
            
            int32_t* rax_8 = j_sub_140a82f30(rax_7)
            int64_t* rcx_6 = var_1b8
            int32_t rax_9 = (*(*rcx_6 + 0x40))(rcx_6, 0x1c, 0, &i_3, rax_8)
            
            if (rax_9 s< 0)
                int64_t var_1a8
                var_1d0 = &var_1a8
                int64_t* var_1d8_4 = nullptr
                var_1a8 = 0
                int64_t var_1a0_1 = 0
                sub_14106a020(rax_9, "Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RHI.cpp", 
                    0x19f, var_1d8_4)
            
            int32_t i_2 = i_3
            
            if (i_2 != 0)
                int32_t* rcx_8 = rax_8
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    if (rbx == 0)
                    label_141056515:
                        int64_t zmm0_1 = (*rcx_8).q
                        rbx = 1
                        rsi = zmm0_1:4.d
                        rdi = zmm0_1.d
                    else
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(*rcx_8 - *arg2)
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(rdi - *arg2)
                        
                        if ((temp2_1 ^ temp1_1) - temp1_1 s<= (temp4_1 ^ temp3_1) - temp3_1)
                            int32_t temp6_1
                            int32_t temp7_1
                            temp6_1:temp7_1 = sx.q(rcx_8[1] - *arg3)
                            int32_t temp8_1
                            int32_t temp9_1
                            temp8_1:temp9_1 = sx.q(rsi - *arg3)
                            
                            if ((temp7_1 ^ temp6_1) - temp6_1 s<= (temp9_1 ^ temp8_1) - temp8_1)
                                goto label_141056515
                    
                    rcx_8 = &rcx_8[7]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            result = j_sub_140a74f90(rax_8)
            int64_t* rcx_10 = var_1b8
            
            if (rcx_10 != 0)
                result = (*(*rcx_10 + 0x10))(rcx_10)
            
            r14_1 += 1
            
            if (r14_1 u< 1)
                continue
        
        int64_t* rcx_16 = var_1c0
        
        if (rcx_16 != 0)
            result = (*(*rcx_16 + 0x10))(rcx_16)
        
        *arg2 = rdi
        *arg3 = rsi
        goto label_1410565a8

int64_t* rcx_12 = var_1c0

if (rcx_12 != 0)
    result = (*(*rcx_12 + 0x10))(rcx_12)

label_1410565a8:
__security_check_cookie(rax_1 ^ &var_1f8)
return result
