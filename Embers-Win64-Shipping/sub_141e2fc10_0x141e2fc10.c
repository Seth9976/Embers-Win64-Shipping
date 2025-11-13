// 函数: sub_141e2fc10
// 地址: 0x141e2fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141df1e90(arg1)
void* result_1 = result
void* result_3 = result
void* result_4

if (result == 0)
    result_4 = nullptr
else
    result = sub_141e01bc0(*(result + 0x10))
    result_4 = result

if (arg1[0xf] != 0)
    result = sub_14245f6d0()
    
    if (result == 0)
        goto label_141e2fc86
    
    void* rdx = arg1[0xf]
    void* r8 = result + 0x30
    result = sx.q(*(result + 0x38))
    
    if (result.d s<= *(rdx + 0x38))
        void* result_2 = result
        result = *(rdx + 0x30)
        
        if ((*(result + (result_2 << 3)) != r8 || rdx == 0) && arg3 == 0)
            goto label_141e2fc8e
        
        goto label_141e2fcba

label_141e2fc86:

if (arg3 != 0)
label_141e2fcba:
    void* r15_1 = arg2[4]
    
    if (result_3 != 0)
        sub_141e1be90(arg1)
        sub_1409d7d20(r15_1 + 0x6c0, &result_1)
        void* result_5 = result_1
        
        if (result_5 != arg2)
            sub_141e0ebf0(result_5)
            int32_t rax = *(result_5 + 0xc)
            void* const rax_7
            
            if (rax s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax)
                uint32_t rdx_4 = zx.d(temp0_1)
                int32_t rax_2 = temp1_1 + rdx_4
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_2.w) - rdx_4) * 0x18
            
            *(rax_7 + 8) |= 0x20000000
    
    void* rbx
    
    if (arg3 == 0)
        result_1 = nullptr
        int64_t* rbp_1
        
        if (arg1[0xf] == 0)
            rbp_1 = nullptr
        else
            void* rax_8 = sub_14245f6d0()
            
            if (rax_8 == 0)
                rbp_1 = nullptr
            else
                rbp_1 = arg1[0xf]
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> rbp_1[7].d || *(rbp_1[6] + (rax_9 << 3)) != rax_8 + 0x30)
                    rbp_1 = nullptr
        
        char rax_11 = sub_140b5b8a0(0, 0)
        uint64_t result_6 = result_1
        uint32_t rcx_12
        rcx_12.b = (result_6 u>> 0x20).d == 0
        
        if ((rcx_12.b & rax_11) != 0)
            sub_140d19010(r15_1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_12 = sub_140d2dfc0(rbp_1, r15_1, result_6, 0, 0, 0, 0, 0, 0)
        rbx = rax_12
        *(rax_12 + 0x31) |= 8
        char rdx_8 = ((arg1[0x13].b << 4 ^ *(rax_12 + 0x31)) & 0x20) ^ *(rax_12 + 0x31)
        *(rax_12 + 0x31) = rdx_8
        *(rbx + 0x31) = ((arg1[0x13].b << 4 ^ rdx_8) & 0x10) ^ rdx_8
    else
        rbx = arg3
    
    arg1[6] = rbx
    sub_141e1bc40(arg1, arg2)
    
    if (arg3 == 0)
        sub_141e05a00(rbx, 0)
        int64_t rbp_2 = sx.q(*(r15_1 + 0x6c8))
        int32_t rax_14 = (rbp_2 + 1).d
        *(r15_1 + 0x6c8) = rax_14
        
        if (rax_14 s> *(r15_1 + 0x6cc))
            sub_1405a4d70(r15_1 + 0x6c0)
        
        *(*(r15_1 + 0x6c0) + (rbp_2 << 3)) = rbx
    
    (*(*arg1 + 0xd0))(arg1, arg2, *(rbx + 0x10))
    int64_t* rax_17 = sub_141e01bc0(*(rbx + 0x10))
    int64_t r8_3 = *arg1
    int32_t zmm0_1
    zmm0_1, result = sub_141e22620(result_4, rax_17, *(*(r8_3 + 0xe8))(arg1, &result_1, r8_3))
    *(arg1 + 0x94) = zmm0_1
else
label_141e2fc8e:
    
    if (result_3 != 0)
        result = sub_141df1e90(arg1)
        
        if (result != 0)
            return sub_141e0ebf0(result)

return result
