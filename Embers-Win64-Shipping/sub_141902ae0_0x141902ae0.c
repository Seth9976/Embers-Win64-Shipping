// 函数: sub_141902ae0
// 地址: 0x141902ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg2
*(arg1 + 0x20) = arg5
sub_1408c8cf0(arg1 + 0x28, nullptr)
int64_t r8 = *(arg1 + 0x30)

if (r8 != 0)
    sub_1418be030(*(arg1 + 0x18) + 0x3b0, 4, r8)
    __builtin_memset(arg1 + 0x30, 0, 0x14)

void* r14 = arg1 + 0x60
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0xffffffff
int32_t rsi_1

if (*(r14 + 0xc) s< 0)
    sub_1418f97f0(r14, 0)
    rsi_1 = *(arg1 + 0x68)
else
    int32_t i_1 = *(r14 + 8)
    int64_t* rsi = *r14
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rbx_1 = *rsi
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_2
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_2 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_4 = sub_140a20af0()
                            uint64_t rdx = zx.q(rax_4)
                            void* const rax_5
                            
                            if (rax_4 != 0)
                                rax_5 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3))
                                    + (zx.q(rdx.d) & 0x3fff) * 0x18
                            else
                                rax_5 = nullptr
                            
                            *(rax_5 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rdx.d)
            
            rsi = &rsi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        r13 = arg2
        r14 = arg1 + 0x60
    
    *(r14 + 8) = 0
    rsi_1 = 0

int32_t rbx_2 = *(arg3 + 0x18)

if (rbx_2 == 0)
    rbx_2 = 1

int32_t rax_10 = rsi_1 + rbx_2
*(r14 + 8) = rax_10

if (rax_10 s> *(r14 + 0xc))
    sub_1405a4d70(r14)

memset(*r14 + (sx.q(rsi_1) << 3), 0, sx.q(rbx_2) << 3)
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = arg4
*(arg1 + 0x80) = arg3
int64_t* result = sub_1405d16e0(arg1 + 0x88, r13)
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = 0xffffffff
return result
