// 函数: sub_1405e2890
// 地址: 0x1405e2890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

void* rsi

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    rsi = &arg1[0xb]
    int32_t i = 0
    
    if (*(rsi + 8) s> 0)
        int64_t r14_1 = 0
        
        do
            void* rdi_1 = *(r14_1 + *rsi + 0x28)
            
            if (rdi_1 != 0)
                void* rcx = *(rdi_1 + 0x28)
                
                if (zx.d(*(rcx + 0x58)) == data_143f0f1a0)
                    *(rcx + 0x70)
                    void*** rbx_1 = arg1[sx.q(*(rcx + 0x70)) + 0xd]
                    
                    if (rbx_1 == 0)
                        void*** rax_5 = sub_1405e04b0()
                        rbx_1 = rax_5
                        arg1[sx.q(*(rcx + 0x70)) + 0xd] = rax_5
                    
                    sub_1405dfc20(&rbx_1[5], rdi_1)
                    *(rbx_1 + 0x64) |= 3
                    sub_1405dfc90(&rbx_1[0xd], *(rdi_1 + 0x28) + 0x70)
            
            i += 1
            r14_1 += 0xa8
        while (i s< *(rsi + 8))
else
    void* i_1 = arg1[0xb]
    rsi = &arg1[0xb]
    
    for (void* rbp_1 = sx.q(*(rsi + 8)) * 0xa8 + i_1; i_1 != rbp_1; i_1 += 0xa8)
        void* rbx_2 = *(i_1 + 0x28)
        *(i_1 + 0x28) = 0
        
        if (rbx_2 != 0)
            int32_t temp1_1 = *(rbx_2 + 0x44)
            *(rbx_2 + 0x44) -= 1
            
            if (temp1_1 == 1)
                if ((*(rbx_2 + 0x4c) & 1) != 0)
                    void* rax_7 = *(rbx_2 + 0x28)
                    sub_1405e3820(zx.q(*(rax_7 + 0x58)) * 0x50 + &data_143cd84b0, rax_7 + 0x70)
                    *(rbx_2 + 0x4c) &= 0xfffffffe
                
                *(rbx_2 + 0x48) = 1
                sub_141997870(rbx_2 + 0x38)

int64_t* rcx_8 = arg1[5]

if (rcx_8 != 0)
    sub_140cd85e0(rcx_8)

int32_t i_3 = *(rsi + 8)
void*** rbx_3 = *rsi

if (i_3 != 0)
    int32_t i_2
    
    do
        sub_1405df6f0(rbx_3)
        rbx_3 = &rbx_3[0x15]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

bool cond:1 = *(rsi + 0xc) == 0
*(rsi + 8) = 0

if (not(cond:1))
    sub_1405e4140(rsi, 0)

return sub_1405e0820(arg1, 0) __tailcall
