// 函数: sub_14297c2a0
// 地址: 0x14297c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[1]
int64_t* rcx = *arg1
int64_t rbx_2 = (arg3 - arg2) s>> 5
int64_t rsi_2 = (r9 - rcx) s>> 5
int64_t rbp_2 = (arg1[2] - rcx) s>> 5
int128_t* result

if (rbx_2 u> rbp_2)
    if (rbx_2 u> 0x7ffffffffffffff)
        sub_140610c20()
        noreturn
    
    uint64_t rdx_1 = rbp_2 u>> 1
    
    if (rbp_2 u<= 0x7ffffffffffffff - rdx_1)
        int64_t rax_2 = rdx_1 + rbp_2
        
        if (rax_2 u< rbx_2)
            rax_2 = rbx_2
        
        rbx_2 = rax_2
    
    if (rcx != 0)
        sub_1409091b0(rcx, r9)
        sub_142826764(arg1, *arg1, rbp_2)
    
    void* rax_5 = nullptr
    __builtin_memset(arg1, 0, 0x18)
    
    if (rbx_2 != 0)
        if (rbx_2 u> 0x7ffffffffffffff)
            sub_140610c20()
            noreturn
        
        int64_t rbx_3 = rbx_2 << 5
        
        if (rbx_3 u>= 0x1000)
            int64_t rcx_2 = rbx_3 + 0x27
            
            if (rcx_2 u<= rbx_3)
                rcx_2 = -1
            
            int64_t rax_3 = j_sub_140a82f30(rcx_2)
            
            if (rax_3 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rax_5 = (rax_3 + 0x27) & 0xffffffffffffffe0
            *(rax_5 - 8) = rax_3
        else if (rbx_3 != 0)
            rax_5 = j_sub_140a82f30(rbx_3)
        
        *arg1 = rax_5
        arg1[1] = rax_5
        arg1[2] = *arg1 + rbx_3
    
    result = sub_14297cc80(arg1, arg2, arg3, *arg1)
    arg1[1] = result
else if (rbx_2 u<= rsi_2)
    void* rbx_5 = &rcx[rbx_2 * 4]
    sub_14297c4f0(arg2, arg3, rcx)
    result = sub_1409091b0(rbx_5, arg1[1])
    arg1[1] = rbx_5
else
    int64_t* rsi_4 = &arg2[rsi_2 * 4]
    sub_14297c4f0(arg2, rsi_4, rcx)
    result = sub_14297cc80(arg1, rsi_4, arg3, arg1[1])
    arg1[1] = result

return result
