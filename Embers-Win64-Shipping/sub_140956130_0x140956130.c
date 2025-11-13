// 函数: sub_140956130
// 地址: 0x140956130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cecf88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecf88)
    
    if (data_143cecf88 == 0xffffffff)
        sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf88)

int64_t rbx = data_143cecf80
j_sub_140b3db50()
int64_t* rax_2 = sub_140b3da90(&data_143de7d78, rbx)
int64_t r8 = *rax_2
int64_t* result = (*(r8 + 0x50))(rax_2, 0, r8)

if (result != 0)
    int64_t r8_1 = *result
    int64_t* var_18
    (*(r8_1 + 0x70))(result, &var_18, r8_1)
    int64_t* rcx_3 = var_18
    int64_t* var_10
    
    if (rcx_3 != 0)
        char rax_4 = (*(*rcx_3 + 0x40))(rcx_3)
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t rbx_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_10 + 8))(var_10, zx.q(rbx_1))
        
        return zx.q(rax_4)
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t rbx_2 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*var_10 + 8))(var_10, zx.q(rbx_2))

result.b = 0
return result
