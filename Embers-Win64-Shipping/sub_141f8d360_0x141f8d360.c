// 函数: sub_141f8d360
// 地址: 0x141f8d360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_10 = 0
int64_t* result = sub_141dcdc50(arg1)

if (result.d != 3)
    result = (*(*arg1 + 0x150))(arg1)
    int64_t* result_2 = result
    int64_t* result_1
    
    if (result == 0)
        result_1 = nullptr
    else
        result_1 = result[0x25]
    
    if (result_1 != 0)
    label_141f8d3eb:
        void var_48
        sub_142427eb0(&var_48)
        int64_t* var_38_1 = arg1
        int64_t rax_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
        int32_t var_1c
        int32_t var_1c_1 = var_1c | 0x40
        int64_t* rbx_1 = result_1[0x49]
        int64_t var_30_1 = rax_1
        char var_20_1 = 1
        
        if (rbx_1 == 0)
            rbx_1 = sub_142574490()
        else
            void* rax_2 = sub_142574490()
            
            if (rax_2 == 0)
                rbx_1 = sub_142574490()
            else
                int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                
                if (rax_3.d s> rbx_1[7].d || *(rbx_1[6] + (rax_3 << 3)) != rax_2 + 0x30)
                    rbx_1 = sub_142574490()
        
        if (rbx_1 == 0)
            rbx_1 = nullptr
        else
            void* rax_6 = sub_142574490()
            
            if (rax_6 == 0)
                rbx_1 = nullptr
            else
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> rbx_1[7].d || *(rbx_1[6] + (rax_7 << 3)) != rax_6 + 0x30)
                    rbx_1 = nullptr
        
        result = sub_1420efae0(result_2, rbx_1, nullptr, nullptr, &var_48)
        arg1[0x45] = result
        int64_t var_58
        
        if (result == 0)
            rbx_1.b = 0
        else
            result = sub_1422a12b0(result, &var_58)
            rdi = 1
            
            if (result[1].d s> 1)
                rbx_1.b = 0
            else
                rbx_1 = 1
        
        if ((rdi & 1) != 0)
            int64_t rcx_8 = var_58
            
            if (rcx_8 != 0)
                result = sub_140a74f90(rcx_8)
        
        if (rbx_1.b != 0)
            int64_t rbx_2 = *arg1[0x45]
            int64_t rax_10 = sub_140ac6680(&result_1[0x52])
            return (*(rbx_2 + 0x678))(arg1[0x45], rax_10)
    else
        void* const rcx_1
        
        if (result_2 == 0)
            rcx_1 = nullptr
        else
            rcx_1 = result[0x26]
        
        if (rcx_1 != 0)
            result = sub_142029530(rcx_1)
            result_1 = result
            
            if (result != 0)
                goto label_141f8d3eb

return result
