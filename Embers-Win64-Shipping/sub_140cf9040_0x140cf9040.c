// 函数: sub_140cf9040
// 地址: 0x140cf9040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1c0b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1c0b0)
    
    if (data_143e1c0b0 == 0xffffffff)
        sub_140b58170(&data_143e1c0a8, "AssetObjectProperty", 1)
        _Init_thread_footer(&data_143e1c0b0)

int32_t rdi = *(arg2 + 0xc)
bool rcx_1 = sub_140b5b8a0(*(arg2 + 8), 0x13)
int64_t rax_3

if ((rdi == 0 & rcx_1) == 0)
    rax_3 = *(arg2 + 8)

if ((rdi == 0 & rcx_1) != 0 || rax_3 == data_143e1c0a8)
    int32_t var_40 = 0xffffffff
    int64_t var_28_1 = 0
    int64_t var_20_1 = 0
    int64_t var_30 = 0
    int64_t var_3c_1 = 0
    int64_t arg_10 = 0
    int64_t* rcx_8 = *(*arg3 + 8)
    (*(*rcx_8 + 0x118))(rcx_8, &var_40)
    int32_t* rcx_9 = &var_40
    uint64_t r9_1
    
    if (data_14399ea98() == 0)
        r9_1 = sub_1408d4dd0(rcx_9)
    else
        uint64_t rax_19 = sub_140d3c6e0(rcx_9)
        r9_1 = rax_19
        
        if (rax_19 == 0 && var_30 != 0)
            if (rax_19.d == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_19 = zx.q(data_1439aaa30)
            
            if (rax_19.d != var_3c_1:4.d || var_40 != 0xffffffff)
                void* rax_20 = sub_140d2bce0(&var_30)
                sub_140d3a3a0(&var_40, rax_20)
                
                if (rax_20 != 0 || data_143e1d7b4 == 0)
                    int32_t rax_21 = 0
                    
                    if (0 == data_1439aaa30)
                        data_1439aaa30 = 0
                    else
                        rax_21 = data_1439aaa30
                    
                    var_3c_1:4.d = rax_21
                
                r9_1 = sub_140d3c6e0(&var_40)
    
    *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * *(arg2 + 0x40)) + arg4) = r9_1
    int64_t r8_4 = *arg1
    (*(r8_4 + 0x158))(arg1, sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * *(arg2 + 0x40)) + arg4, 
        r8_4)
    
    if (var_28_1 != 0)
        sub_140a74f90(var_28_1)
else
    if (((rax_3 u>> 0x20).d == 0 & sub_140b5b8a0(rax_3.d, 0xf)) == 0)
        return 0
    
    int64_t* rcx_4 = *(*arg3 + 8)
    void* var_48
    (*(*rcx_4 + 0x130))(rcx_4, &var_48)
    void* r8_1 = var_48
    
    if (r8_1 != 0)
        void* r9 = *(r8_1 + 0x10)
        void* r10_2 = arg1[0xf] + 0x30
        int64_t rcx_5 = sx.q(*(r10_2 + 8))
        
        if (rcx_5.d s> *(r9 + 0x38) || *(*(r9 + 0x30) + (rcx_5 << 3)) != r10_2)
            return 1
    
    *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * *(arg2 + 0x40)) + arg4) = r8_1
    int64_t r8_2 = *arg1
    (*(r8_2 + 0x158))(arg1, sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * *(arg2 + 0x40)) + arg4, 
        r8_2)

return 2
