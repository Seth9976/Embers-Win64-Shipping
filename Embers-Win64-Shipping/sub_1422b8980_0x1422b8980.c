// 函数: sub_1422b8980
// 地址: 0x1422b8980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t* rbx = arg2
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

int64_t* rdi_2 = (rdi << 5) + *arg1
__builtin_memset(&rdi_2[1], 0, 0x18)
*rdi_2 = rbx
*(rdi_2 + 0x1c) = 2
*(rdi_2 + 0xc) = arg3
*(rdi_2 + 0xa) = *(rbx + 0x3c)
*(rdi_2 + 0x16) = arg5
*(rdi_2 + 0x14) = arg4
rdi_2[3].d = sub_1422c66e0(rbx, arg8, arg7, arg6)

if ((*(rbx[1] + 0x16) & 1) != 0)
    rbx = rbx[0xf]

sub_140d12020()
int32_t rbp_1 = 0
int64_t rdx_2 = *(rbx[1] + 0x10)

if ((data_143e1c4a8 & rdx_2) == 0)
    sub_140d11050()
    
    if ((data_143e1b9d8 & *(rbx[1] + 0x10)) == 0)
        sub_140d113c0()
        
        if ((data_143e1bfc8 & *(rbx[1] + 0x10)) == 0)
            sub_140d11680()
            
            if ((data_143e1be38 & *(rbx[1] + 0x10)) == 0)
                sub_140d11100()
                
                if ((data_143e1ba28 & *(rbx[1] + 0x10)) == 0)
                    sub_140cea290()
                    
                    if ((data_143e1b8c8 & *(rbx[1] + 0x10)) == 0)
                        sub_140d11b50()
                        
                        if ((data_143e1bcf8 & *(rbx[1] + 0x10)) == 0)
                            sub_140d12180()
                            
                            if ((data_143e1bf28 & *(rbx[1] + 0x10)) == 0)
                                sub_140d12230()
                                
                                if ((data_143e1bf78 & *(rbx[1] + 0x10)) == 0)
                                    sub_140d11f70()
                                    
                                    if ((data_143e1c458 & *(rbx[1] + 0x10)) != 0)
                                        *(rdi_2 + 0x1c) = 0x13
                                else
                                    *(rdi_2 + 0x1c) = 0x14
                            else
                                *(rdi_2 + 0x1c) = 9
                        else
                            *(rdi_2 + 0x1c) = 7
                    else
                        sub_140d11ec0()
                        
                        if ((data_143e1c3b8 & *(rbx[1] + 0x10)) == 0)
                            sub_140d122e0()
                            char rax_10 = 8
                            
                            if ((*(rbx[1] + 0x10) & data_143e1c508) != 0)
                                rax_10 = 0x17
                            
                            *(rdi_2 + 0x1c) = rax_10
                        else
                            *(rdi_2 + 0x1c) = 0x16
                else
                    *(rdi_2 + 0x1c) = 6
            else
                *(rdi_2 + 0x1c) = 5
        else
            *(rdi_2 + 0x1c) = 4
    else
        char rax_9 = 3
        
        if (*(rbx + 0x7b) == 0xff)
            rax_9 = 0x15
        
        *(rdi_2 + 0x1c) = rax_9
else
    if (((rdx_2 u>> 0x14).b & 1) == 0)
        rbx = nullptr
    
    void* rsi_1 = rbx[0xf]
    *(rdi_2 + 0x1d) |= 2
    int64_t rbx_1 = *(rsi_1 + 0x18)
    int32_t rcx_2
    rcx_2.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_2.b & sub_140b5b8a0(rbx_1.d, 0x3b)) == 0)
        int64_t rbx_3 = *(rsi_1 + 0x18)
        int32_t rcx_3
        rcx_3.b = (rbx_3 u>> 0x20).d == 0
        
        if ((rcx_3.b & sub_140b5b8a0(rbx_3.d, 0x3c)) == 0)
            int64_t rbx_5 = *(rsi_1 + 0x18)
            int32_t rcx_4
            rcx_4.b = (rbx_5 u>> 0x20).d == 0
            
            if ((rcx_4.b & sub_140b5b8a0(rbx_5.d, 0x3f)) == 0)
                int64_t rax_8 = *(rsi_1 + 0x18)
                
                if (rax_8 == data_143f53f50)
                    *(rdi_2 + 0x1c) = 0xd
                else if (rax_8 == data_143f53f58)
                    *(rdi_2 + 0x1c) = 0x11
                else if (rax_8 == data_143f53f60)
                    *(rdi_2 + 0x1c) = 0x10
                else if (rax_8 == data_143f53f68)
                    *(rdi_2 + 0x1c) = 0x12
                else if (rax_8 == data_143f53f70)
                    *(rdi_2 + 0x1c) = 0xe
                else if (rax_8 == data_143f53f78)
                    *(rdi_2 + 0x1c) = 0xf
            else
                *(rdi_2 + 0x1c) = 0xc
        else
            *(rdi_2 + 0x1c) = 0xb
    else
        *(rdi_2 + 0x1c) = 0xa

int64_t* rcx_16 = *rdi_2

if ((*(*rcx_16 + 0x98))(rcx_16) != 0)
    void* rbx_7 = *rdi_2
    uint32_t rbx_9
    
    if (rbx_7 == 0)
        rbx_9 = 0
    else
        int64_t rbx_8 = *(rbx_7 + 0x28)
        rbp_1 = rbx_8.d
        rbx_9 = (rbx_8 u>> 0x20).d
    
    int32_t rcx_17
    rcx_17.b = sub_140b5b8a0(rbp_1, 0xd8) == 0
    rcx_17.b |= rbx_9 != 0
    
    if (rcx_17.b != 0)
        *(rdi_2 + 0x1d) |= 1

return zx.q(rdi_2[3].d)
