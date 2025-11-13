// 函数: sub_1426b8930
// 地址: 0x1426b8930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)

if (arg2 == 0 || (result.b & 1) == 0)
    result = sub_141f8f9a0(arg1, arg2)
    
    if (arg1[0x4a] != 0 && arg2 != 0)
        int64_t* rcx_5 = arg1[0x5b]
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x3e8))(rcx_5)
        
        int64_t arg_10
        
        if ((arg1[0x5a].b & 0x20) != 0)
            int32_t arg_1c = 0
            (*(*arg1 + 0x658))(arg1, (*sub_140b5e500(&arg_10, 0x140)).q)
        
        void* result_1
        
        if (arg1[0x60] == 0)
            int64_t rax_13 = sub_14263d7c0()
            int64_t r8_1 = *arg2
            result = (*(r8_1 + 0x610))(arg2, rax_13, r8_1)
            result_1 = result
            
            if (result == 0)
                uint64_t rbx_2 = *sub_140b58260(&arg_10, u"GameplayTasksComponent", (result + 1).d)
                uint32_t rcx_13
                rcx_13.b = (rbx_2 u>> 0x20).d == 0
                
                if ((rcx_13.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
                    sub_140d19010(arg2, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                void* result_2 = sub_140d2dfc0(sub_14263d7c0(), arg2, rbx_2, 0, 0, 0, 0, 0, 0)
                result_1 = result_2
                result = sub_141ef1390(result_2)
            
            arg1[0x60] = result_1
        
        if (arg1[0x60] != 0 || result_1 != 0)
            int64_t rbx_3 = *sub_140b58260(&arg_10, u"OnGameplayTaskResourcesClaimed", 1)
            void* rax_18 = arg1[0x60]
            int32_t* rdi_1 = *(rax_18 + 0x110)
            void* rbp_3 = &rdi_1[sx.q(*(rax_18 + 0x118)) * 4]
            
            if (rdi_1 == rbp_3)
            label_1426b8b37:
                wchar16* i_1 = nullptr
                
                for (wchar16* i = wcsstr(&AAIController::OnGameplayTaskResourcesClaimed", ::"); 
                        i != 0; i = wcsstr(&i[1], ::"))
                    i_1 = i
                
                sub_140b58260(&arg_10, &i_1[2], 1)
                int64_t rbx_4 = arg_10
                uint64_t* rdi_3 = arg1[0x60] + 0x110
                int128_t var_28
                sub_140d3a3a0(&var_28, nullptr)
                int64_t var_20_1 = 0
                sub_140d3a3a0(&var_28, arg1)
                int32_t rcx_23
                rcx_23.b = sub_140b5b8a0(rbx_4.d, 0) == 0
                
                if ((rbx_4:4.d != 0 | rcx_23.b) != 0)
                    void* rax_20 = sub_140d3c6e0(&var_28)
                    
                    if (rax_20 != 0)
                        sub_140d1fd20(rax_20, rbx_4)
                
                sub_1408f4c10(rdi_3)
                int64_t rbx_5 = sx.q(rdi_3[1].d)
                int32_t rax_21 = (rbx_5 + 1).d
                rdi_3[1].d = rax_21
                
                if (rax_21 s> *(rdi_3 + 0xc))
                    sub_1405a4f90(rdi_3)
                
                result = *rdi_3
                *(result + rbx_5 * 0x10) = var_28
            else
                while (true)
                    if (*(rdi_1 + 8) == rbx_3)
                        result = sub_140d3cab0(rdi_1)
                        
                        if (arg1 == result)
                            break
                    
                    rdi_1 = &rdi_1[4]
                    
                    if (rdi_1 == rbp_3)
                        goto label_1426b8b37
        
        void* rdx_11 = arg1[0x5f]
        
        if (rdx_11 != 0)
            int64_t r8_4 = *(rdx_11 + 0xc0)
            
            if (r8_4 != 0)
                result = (*(*arg1 + 0x7b8))(arg1, rdx_11, r8_4)
        
        if ((arg1[0x5a].b & 1) != 0)
            int64_t* rcx_31 = arg1[0x5c]
            
            if (rcx_31 != 0)
                return (*(*rcx_31 + 0x3f0))(rcx_31)

return result
