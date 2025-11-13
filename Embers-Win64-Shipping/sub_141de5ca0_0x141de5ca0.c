// 函数: sub_141de5ca0
// 地址: 0x141de5ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t result

if (arg1[1].d s<= 0)
label_141de5d8e:
    result.b = 0
else
    void* rsi_1 = nullptr
    
    while (true)
        int64_t rbx_1 = sx.q(arg2[1].d)
        uint64_t rcx = 0
        result = *arg1
        int64_t rbp_1 = *arg2
        uint64_t var_38 = 0
        int32_t var_30_1 = rbx_1.d
        
        if (rbx_1.d != 0)
            sub_1405c4a00(&var_38, rbx_1.d, 0)
            memcpy(var_38, rbp_1, (rbx_1 << 3).d)
            rcx = var_38
        else
            int32_t var_2c_1 = 0
        
        int64_t* rbx_2 = *(rsi_1 + result)
        
        if (rbx_2 != 0)
            void* rax = sub_14245c440()
            void* rcx_3 = rbx_2[2]
            result = sx.q(*(rax + 0x38))
            
            if (result.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (result << 3)) == rax + 0x30
                    && (*(*rbx_2 + 0x340))(rbx_2, &var_38).b != 0)
                uint64_t rcx_5 = var_38
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                result.b = 1
                break
            
            rcx = var_38
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rdi += 1
        rsi_1 += 0x20
        
        if (rdi s>= arg1[1].d)
            goto label_141de5d8e

return result
