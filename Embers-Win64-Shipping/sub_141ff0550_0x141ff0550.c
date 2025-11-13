// 函数: sub_141ff0550
// 地址: 0x141ff0550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x30)
char arg_8 = 0
sub_141fd4d30(*(arg1 + 0x28), rdx, arg_8)
void* r15 = nullptr

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    void* rax_4
    
    if (*(arg1 + 0x50) s> 1)
        int16_t* rsi_1
        
        if (*(arg1 + 0x50) == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *(arg1 + 0x48)
        
        void* rax_2 = sub_140cde0b0()
        rax_4 = sub_140d2ee50(sub_14249a9d0(), rax_2, rsi_1, 0)
        r15 = rax_4
    
    if (*(arg1 + 0x50) s<= 1 || rax_4 == 0)
        int64_t* rax_5 = sub_14249a9d0()
        r15 = rax_5[0x23]
        
        if (r15 == 0)
            int64_t rdx_2 = *rax_5
            (*(rdx_2 + 0x390))(rax_5, rdx_2)
            r15 = rax_5[0x23]

int32_t i_1 = 0
int128_t* rdi_3 = nullptr
int32_t i

do
    i = i_1 + 1
    
    if (*(arg1 + 0x30) s< i || zx.d(*(rdi_3 + *(arg1 + 0x28))) s> i_1)
        int32_t rax_11
        void* rcx_7
        
        if (r15 == 0 || *(r15 + 0x30) s<= i_1)
            int128_t var_94_1 = data_143296af0
            char var_98 = 0
            int128_t var_74_1 = data_143296b00
            int32_t var_84_1 = 0xffffffff
            int32_t var_7c_1 = 0xffffffff
            char var_78_1 = 1
            int32_t var_64_1 = 0
            int32_t var_60_1 = 0x1000
            int32_t var_5c_1 = 0xc
            int32_t rcx_9 = *sub_140b5e500(&arg_8, 0x12e)
            int32_t var_54_1 = 0
            void arg_10
            int32_t var_50_1 = *sub_140b5e500(&arg_10, 0x12d)
            int32_t var_4c_1 = 0
            int16_t var_48_1 = 1
            sub_1423c9d40(&var_98)
            int32_t r14_3 = *(arg1 + 0x30)
            *(arg1 + 0x30) = r14_3 + 1
            
            if (r14_3 + 1 s> *(arg1 + 0x34))
                sub_141eca1b0(arg1 + 0x28)
            
            void* rdx_8 = *(arg1 + 0x28) + rdi_3
            memmove(rdx_8 + 0x54, rdx_8, (r14_3 - i_1) * 0x54)
            rcx_7 = *(arg1 + 0x28) + rdi_3
            *rcx_7 = var_98.o
            *(rcx_7 + 0x10) = var_94_1
            *(rcx_7 + 0x20) = var_78_1.o
            *(rcx_7 + 0x30) = var_74_1
            *(rcx_7 + 0x40) = rcx_9.o
            rax_11 = var_48_1.d
        else
            int64_t rax_7 = *(r15 + 0x28)
            int32_t r14_1 = *(arg1 + 0x30)
            *(arg1 + 0x30) = r14_1 + 1
            
            if (r14_1 + 1 s> *(arg1 + 0x34))
                sub_141eca1b0(arg1 + 0x28)
            
            void* rdx_5 = *(arg1 + 0x28) + rdi_3
            memmove(rdx_5 + 0x54, rdx_5, (r14_1 - i_1) * 0x54)
            rcx_7 = *(arg1 + 0x28) + rdi_3
            *rcx_7 = *(rdi_3 + rax_7)
            *(rcx_7 + 0x10) = *(rdi_3 + rax_7 + 0x10)
            *(rcx_7 + 0x20) = *(rdi_3 + rax_7 + 0x20)
            *(rcx_7 + 0x30) = *(rdi_3 + rax_7 + 0x30)
            *(rcx_7 + 0x40) = *(rdi_3 + rax_7 + 0x40)
            rax_11 = *(rdi_3 + rax_7 + 0x50)
        
        *(rcx_7 + 0x50) = rax_11
        *(rdi_3 + *(arg1 + 0x28)) = i_1.b
    
    rdi_3 += 0x54
    i_1 = i
while (i s< 0x31)
sub_1423c9ed0(arg1, 0)
sub_1423c9ed0(arg1, 1)
sub_1423c9ed0(arg1, 2)
sub_1423c9ed0(arg1, 3)
sub_1423c9ed0(arg1, 4)
sub_1423c9ed0(arg1, 5)
sub_1423c9ed0(arg1, 6)
sub_1423c9ed0(arg1, 7)
sub_1423c9ed0(arg1, 8)
sub_1423c9ed0(arg1, 9)
sub_1423c9ed0(arg1, 0xa)
sub_1423c9ed0(arg1, 0xb)
sub_1423c9ed0(arg1, 0xc)
sub_1423c9ed0(arg1, 0xd)
sub_1423c9ed0(arg1, 0xe)
sub_1423c9ed0(arg1, 0xf)
sub_1423c9ed0(arg1, 0x10)
sub_1423c9ed0(arg1, 0x11)
sub_1423c9ed0(arg1, 0x12)
sub_1423c9ed0(arg1, 0x13)
sub_1423c9ed0(arg1, 0x14)
sub_1423c9ed0(arg1, 0x15)
sub_1423c9ed0(arg1, 0x16)
sub_1423c9ed0(arg1, 0x17)
sub_1423c9ed0(arg1, 0x18)
sub_1423c9ed0(arg1, 0x19)
sub_1423c9ed0(arg1, 0x1a)
sub_1423c9ed0(arg1, 0x1b)
sub_1423c9ed0(arg1, 0x1c)
sub_1423c9ed0(arg1, 0x1d)
sub_1423c9ed0(arg1, 0x1e)
sub_1423c9ed0(arg1, 0x1f)
sub_1423c9ed0(arg1, 0x20)
sub_1423c9ed0(arg1, 0x21)
sub_1423c9ed0(arg1, 0x22)
sub_1423c9ed0(arg1, 0x23)
sub_1423c9ed0(arg1, 0x24)
sub_1423c9ed0(arg1, 0x25)
sub_1423c9ed0(arg1, 0x26)
sub_1423c9ed0(arg1, 0x27)
sub_1423c9ed0(arg1, 0x28)
sub_1423c9ed0(arg1, 0x29)
sub_1423c9ed0(arg1, 0x2a)
sub_1423c9ed0(arg1, 0x2b)
sub_1423c9ed0(arg1, 0x2c)
sub_1423c9ed0(arg1, 0x2d)
sub_1423c9ed0(arg1, 0x2e)
sub_1423c9ed0(arg1, 0x2f)
return sub_1423c9ed0(arg1, 0x30) __tailcall
