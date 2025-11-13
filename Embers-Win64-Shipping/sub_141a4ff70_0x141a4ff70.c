// 函数: sub_141a4ff70
// 地址: 0x141a4ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0x28)

if (rax != 0 || *(arg1 + 0x10) == rax)
    return rax

uint64_t rax_1 = sub_140d3c6e0(arg1)
uint64_t rbx_1 = rax_1

if (rax_1 != 0)
label_141a50007:
    void* rax_5 = sub_140d41340()
    void* rdx_2 = *(rbx_1 + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
        goto label_141a5002d
else
    if (*(arg1 + 0x10) != 0)
        if (rax_1.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_1 = zx.q(data_1439aaa30)
        
        if (rax_1.d == arg1[2] && *arg1 == 0xffffffff)
            goto label_141a5002d
        
        void* rax_2 = sub_140d2bce0(&arg1[4])
        sub_140d3a3a0(arg1, rax_2)
        
        if (rax_2 != 0 || data_143e1d7b4 == 0)
            int32_t rax_3 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_3 = data_1439aaa30
            
            arg1[2] = rax_3
        
        uint64_t rax_4 = sub_140d3c6e0(arg1)
        rbx_1 = rax_4
        
        if (rax_4 == 0)
            goto label_141a5002d
        
        goto label_141a50007
    
label_141a5002d:
    uint64_t rax_8 = sub_1408d4dd0(arg1)
    rbx_1 = rax_8
    void* rax_9
    int64_t rax_10
    void* rdx_3
    
    if (rax_8 != 0)
        rax_9 = sub_140d41340()
        rdx_3 = *(rbx_1 + 0x10)
        rax_10 = sx.q(*(rax_9 + 0x38))
    
    if (rax_8 == 0 || rax_10.d s> *(rdx_3 + 0x38)
            || *(*(rdx_3 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
        return 0

if (sub_140d226f0(rbx_1, sub_1425be5e0()) == 0)
    *(arg1 + 0x28) = rbx_1

return rbx_1
