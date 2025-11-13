// 函数: sub_142130af0
// 地址: 0x142130af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
int64_t* result = sub_140ce8e10(arg1, arg2)

if ((arg1[0x1b].b & 1) != 0 && arg2[8].d s>= 0x104)
    int32_t rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (rax_1 s< 0x15)
        (*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
        (*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
        sub_14211bb40(arg2, &arg1[0x2d], 
            sub_14211b510(arg2, &arg1[0x2b], sub_14211b950(arg2, &arg1[0x29], zmm1_1)))
        int32_t rax_4
        rax_4, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a4b70)
        
        if (rax_4 s>= 0xb)
            zmm1_1 = sub_14211b700(arg2, &arg1[0x2f], zmm1_1)
    
    result = sub_1421166e0(nullptr, arg2, &arg1[0x71], nullptr, zmm1_1)

if ((arg2[5].b & 2) != 0 && arg2[0xe] != 0)
    int32_t rbx_1 = data_1439c7a08
    
    if (data_143de5480 == 0)
    label_142130c24:
        int64_t* rax_7 = (*(*arg1 + 0x260))(arg1)
        int64_t r9_1 = *rax_7
        result = (*(r9_1 + 0x2e0))(rax_7, zx.q(rbx_1), 3, r9_1)
        int64_t* result_1 = result
        
        if (result != 0)
            int64_t* arg_8 = arg1[3]
            uint64_t var_38 = 0
            int64_t var_30_1 = 0
            sub_140b63e00(&arg_8, &var_38)
            int64_t r14_1 = 0x40
            int64_t i_1 = 5
            int64_t i
            
            do
                void* rax_9 = sub_142129070(result_1) + r14_1
                void* j = *rax_9
                
                if ((j.b & 1) != 0)
                    j = (j s>> 1) + rax_9
                
                result = sx.q(*(rax_9 + 8))
                
                for (void* rdi_1 = j + result * 0x28; j != rdi_1; j += 0x28)
                    arg_8 = nullptr
                    result = sub_1421487d0(j, arg1, result_1, &arg_8)
                    int64_t* rcx_17 = arg_8
                    
                    if (rcx_17 != 0)
                        result = (*(*rcx_17 + 0x308))(rcx_17)
                
                r14_1 += 0x10
                i = i_1
                i_1 -= 1
            while (i != 1)
            uint64_t rcx_18 = var_38
            
            if (rcx_18 != 0)
                return sub_140a74f90(rcx_18)
    else
        uint32_t rax_5
        rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_5.b != 0)
            goto label_142130c24
        
        result = data_14399fa10()
        
        if (result.b != 0)
            goto label_142130c24

return result
