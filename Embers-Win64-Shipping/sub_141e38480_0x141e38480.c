// 函数: sub_141e38480
// 地址: 0x141e38480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t rbx = 0
*arg1 = &data_143246890
arg1[5] = &data_143246af0
arg1[6] = &data_143246b20
__builtin_memset(&arg1[7], 0, 0x20)
sub_141df2500(&arg1[0xb], 1)
__builtin_memset(&arg1[0x2c], 0, 0x50)
void* rcx_1 = &arg1[0x36]
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x40]
arg1[0x3a].d = 0xffffffff
*(arg1 + 0x1d4) = 0
arg1[0x3c] = 0
arg1[0x3d].d = 0
arg1[0x3e] = 0
arg1[0x3f] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x54]
arg1[0x44].d = 0xffffffff
*(arg1 + 0x224) = 0
arg1[0x46] = 0
arg1[0x47].d = 0
__builtin_memset(&arg1[0x49], 0, 0x20)
__builtin_memset(&arg1[0x4e], 0, 0x30)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x58].d = 0xffffffff
*(arg1 + 0x2c4) = 0
arg1[0x5a] = 0
arg1[0x5b].d = 0
arg1[0x5c] = 0
arg1[0x5d] = 0
arg1[0x5e] = 2
void* rdx_1 = &arg1[0x63]
__builtin_memset(&arg1[0x5f], 0, 0x20)
*(rdx_1 + 0x10) = 0
*(rdx_1 + 0x18) = 0
*(rdx_1 + 0x1c) = 0x80
void* rax_3 = *(rdx_1 + 0x10)

if (rax_3 != 0)
    rdx_1 = rax_3

*rdx_1 = 0
*(rdx_1 + 8) = 0
arg1[0x67].d = 0xffffffff
*(arg1 + 0x33c) = 0
arg1[0x69] = 0
arg1[0x6a].d = 0
arg1[0x6b] = 0
arg1[0x6c] = 0
arg1[0x48] = sub_141e53e10(&arg1[0x3e], data_143f398c8)
arg1[0x4d].w = 0

if (((arg1[1].d u>> 4).b & 1) == 0)
    return arg1

void*** rax_7 = sub_140a84c80(0, 0x20, 0)

if (rax_7 != 0)
    *rax_7 = &data_1432497b0
    rax_7[1] = sub_141e436a0
    rax_7[3] = sub_140a387b0()
    *rax_7 = &data_143249808

if (rax_7 != 0)
    if (data_1439aa90c s<= 0)
        int32_t rdx_3 = data_1439aa900
        int32_t rax_10 = data_1439aa908 - 1
        data_1439aa908 = rax_10
        
        if (rax_10 s<= rdx_3)
            int32_t rbp_1 = rdx_3
            
            if (rdx_3 s> 0)
                int64_t* rdi_1 = nullptr
                
                do
                    int64_t rax_11 = data_1439aa8f8
                    
                    if (*(rdi_1 + rax_11 + 8) == 0)
                        sub_1405a4880(&data_1439aa8f8, rbx, 1, 1)
                    else
                        int64_t* rcx_5 = *(rdi_1 + rax_11)
                        
                        if (rcx_5 == 0)
                            sub_1405a4880(&data_1439aa8f8, rbx, 1, 1)
                        else if ((*(*rcx_5 + 0x20))(rcx_5) != 0)
                            sub_1405a4880(&data_1439aa8f8, rbx, 1, 1)
                        else
                            rbx += 1
                            rdi_1 = &rdi_1[2]
                    
                    rdx_3 = data_1439aa900
                while (rbx s< rdx_3)
            
            int32_t rax_14 = rdx_3 * 2
            
            if (rax_14 s<= 2)
                rax_14 = 2
            
            data_1439aa908 = rax_14
            
            if (rbp_1 s> rax_14 && data_1439aa904 != rdx_3)
                sub_1405a5410(&data_1439aa8f8, rdx_3)
    
    void arg_8
    (*rax_7)[6](rax_7, &arg_8)
    int64_t rbx_1 = sx.q(data_1439aa900)
    int32_t rax_16 = (rbx_1 + 1).d
    bool cond:0_1 = rax_16 s<= data_1439aa904
    data_1439aa900 = rax_16
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_1439aa8f8)
    
    void**** rax_19 = (rbx_1 << 4) + data_1439aa8f8
    *rax_19 = rax_7
    rax_19[1].d = 2

return arg1
