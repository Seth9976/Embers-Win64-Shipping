// 函数: sub_140e42140
// 地址: 0x140e42140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x14) == 1)
    uint64_t rsi_1 = 0
    
    if (*(arg1 + 0x3c) s> 0)
        do
            int64_t i_4 = 8
            void* rax_1 = arg1 + 0xcc
            void* r8_1 = &arg1[9]
            int64_t i
            
            do
                rax_1 += 0x20
                char* rdx_2 = *r8_1 + sx.q((rsi_1 << 3).d)
                r8_1 += 8
                *(rax_1 - 0x20) = zx.d(*rdx_2) - 0x80
                *(rax_1 - 0x1c) = zx.d(rdx_2[1]) - 0x80
                *(rax_1 - 0x18) = zx.d(rdx_2[2]) - 0x80
                *(rax_1 - 0x14) = zx.d(rdx_2[3]) - 0x80
                *(rax_1 - 0x10) = zx.d(rdx_2[4]) - 0x80
                *(rax_1 - 0xc) = zx.d(rdx_2[5]) - 0x80
                *(rax_1 - 8) = zx.d(rdx_2[6]) - 0x80
                *(rax_1 - 4) = zx.d(rdx_2[7]) - 0x80
                i = i_4
                i_4 -= 1
            while (i != 1)
            sub_140e39fb0(arg1, 0)
            rsi_1 = zx.q(rsi_1.d + 1)
        while (rsi_1.d s< *(arg1 + 0x3c))
    
    return 

char rax = *(arg1 + 0x15)

if (rax != 1)
    if (rax == 2)
        rax = arg1[3].b
        
        if (rax == 1)
            int32_t i_1 = 0
            
            if (*(arg1 + 0x3c) s> 0)
                int32_t rbx_1 = 0
                
                do
                    sub_140e40440(arg1, zx.q(rbx_1), 0, 0)
                    sub_140e39fb0(arg1, 0)
                    sub_140e40440(arg1, zx.q(rbx_1 + 1), 0, 0)
                    sub_140e39fb0(arg1, 0)
                    sub_140e40170(arg1, zx.q(i_1), 1)
                    sub_140e39fb0(arg1, 1)
                    sub_140e40170(arg1, zx.q(i_1), 2)
                    sub_140e39fb0(arg1, 2)
                    i_1 += 1
                    rbx_1 += 2
                while (i_1 s< *(arg1 + 0x3c))
        else if (rax == 2)
            int32_t i_2 = 0
            
            if (*(arg1 + 0x3c) s> 0)
                int32_t rbp_1 = 0
                
                do
                    sub_140e40440(arg1, zx.q(rbp_1), 0, 0)
                    sub_140e39fb0(arg1, 0)
                    sub_140e40440(arg1, zx.q(rbp_1 + 1), 0, 0)
                    sub_140e39fb0(arg1, 0)
                    sub_140e40440(arg1, zx.q(rbp_1), 1, 0)
                    sub_140e39fb0(arg1, 0)
                    sub_140e40440(arg1, zx.q(rbp_1 + 1), 1, 0)
                    sub_140e39fb0(arg1, 0)
                    sub_140e3fee0(arg1, zx.q(i_2), 1)
                    sub_140e39fb0(arg1, 1)
                    sub_140e3fee0(arg1, zx.q(i_2), 2)
                    sub_140e39fb0(arg1, 2)
                    i_2 += 1
                    rbp_1 += 2
                while (i_2 s< *(arg1 + 0x3c))
else if (arg1[3].b == rax)
    int32_t i_3 = 0
    
    if (*(arg1 + 0x3c) s> 0)
        do
            sub_140e40440(arg1, zx.q(i_3), 0, 0)
            sub_140e39fb0(arg1, 0)
            sub_140e40440(arg1, zx.q(i_3), 0, 1)
            sub_140e39fb0(arg1, 1)
            sub_140e40440(arg1, zx.q(i_3), 0, 2)
            sub_140e39fb0(arg1, 2)
            i_3 += 1
        while (i_3 s< *(arg1 + 0x3c))
