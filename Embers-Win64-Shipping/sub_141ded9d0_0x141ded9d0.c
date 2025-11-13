// 函数: sub_141ded9d0
// 地址: 0x141ded9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea6540(arg1, arg2, arg3)
arg1[0x78].d = 0

if (*(arg1 + 0x3c4) != 0)
    sub_1405c5570(&arg1[0x77], 0)

arg1[0x7a].d = 0

if (*(arg1 + 0x3d4) != 0)
    sub_1405c5570(&arg1[0x79], 0)

arg1[0x7c].d = 0

if (*(arg1 + 0x3e4) != 0)
    sub_1405c5570(&arg1[0x7b], 0)

arg1[0x7e].d = 0

if (*(arg1 + 0x3f4) != 0)
    sub_1405c5570(&arg1[0x7d], 0)

arg1[0x80].d = 0

if (*(arg1 + 0x404) != 0)
    sub_1405c5570(&arg1[0x7f], 0)

arg1[0x82].d = 0

if (*(arg1 + 0x414) != 0)
    sub_1405c5570(&arg1[0x81], 0)

arg1[0x84].d = 0

if (*(arg1 + 0x424) != 0)
    sub_1405c5570(&arg1[0x83], 0)

int64_t* var_48 = arg1
void* const i_5

if (arg1 == 0)
    i_5 = nullptr
else
    i_5 = arg1[0xa]

int32_t var_38 = 0xffffffff
int16_t var_34 = 0x101
char var_32 = 0
int64_t* result = sub_1406328d0(&var_48)
void* i_6

for (void* const i = i_5; i != 0; i = i_6)
    if (((*(*(i + 8) + 0x10) u>> 0x14).b & 1) != 0)
        void* rax_1 = sub_142468160()
        
        if (rax_1 != 0)
            int64_t rcx_10 = sx.q(*(rax_1 + 0x38))
            void* rax_2 = *(i + 0x78)
            
            if (rcx_10.d s<= *(rax_2 + 0x38) && *(*(rax_2 + 0x30) + (rcx_10 << 3)) == rax_1 + 0x30)
                int64_t rax_4 = sub_142468340()
                int64_t rbp_1
                
                if (*(i + 0x78) != rax_4)
                    int64_t rax_6 = sub_1424683a0()
                    
                    if (*(i + 0x78) != rax_6)
                        void* rax_8 = sub_142468580()
                        
                        if (rax_8 != 0)
                            int64_t rcx_13 = sx.q(*(rax_8 + 0x38))
                            void* rax_9 = *(i + 0x78)
                            
                            if (rcx_13.d s<= *(rax_9 + 0x38)
                                    && *(*(rax_9 + 0x30) + (rcx_13 << 3)) == rax_8 + 0x30)
                                rbp_1 = sx.q(arg1[0x82].d)
                                int32_t rax_11 = (rbp_1 + 1).d
                                arg1[0x82].d = rax_11
                                
                                if (rax_11 s> *(arg1 + 0x414))
                                    sub_1405a4d70(&arg1[0x81])
                                
                                *(arg1[0x81] + (rbp_1 << 3)) = i
                    else
                        rbp_1 = sx.q(arg1[0x7c].d)
                        int32_t rax_7 = (rbp_1 + 1).d
                        arg1[0x7c].d = rax_7
                        
                        if (rax_7 s> *(arg1 + 0x3e4))
                            sub_1405a4d70(&arg1[0x7b])
                        
                        *(arg1[0x7b] + (rbp_1 << 3)) = i
                else
                    rbp_1 = sx.q(arg1[0x7a].d)
                    int32_t rax_5 = (rbp_1 + 1).d
                    arg1[0x7a].d = rax_5
                    
                    if (rax_5 s> *(arg1 + 0x3d4))
                        sub_1405a4d70(&arg1[0x79])
                    
                    *(arg1[0x79] + (rbp_1 << 3)) = i
                int64_t rbp_2 = sx.q(arg1[0x78].d)
                int32_t rax_12 = (rbp_2 + 1).d
                arg1[0x78].d = rax_12
                
                if (rax_12 s> *(arg1 + 0x3c4))
                    sub_1405a4d70(&arg1[0x77])
                
                *(arg1[0x77] + (rbp_2 << 3)) = i
    
    i_6 = *(i + 0x20)
    result = sub_1406328d0(&var_48)

int64_t* rbp_3 = arg1

while (true)
    int64_t* rbx = rbp_3[8]
    
    if (rbx == 0)
        break
    
    void* rax_13 = sub_142458800()
    void* rdx_6 = rbx[2]
    result = sx.q(*(rax_13 + 0x38))
    
    if (result.d s> *(rdx_6 + 0x38))
        break
    
    int64_t* result_1 = result
    result = *(rdx_6 + 0x30)
    
    if (result[result_1] != rax_13 + 0x30)
        break
    
    rbp_3 = rbx

if (rbp_3 != arg1)
    if (&arg1[0x69] != &rbp_3[0x69])
        int32_t i_7 = arg1[0x6a].d
        void* rax_14 = arg1[0x69]
        
        if (i_7 != 0)
            int32_t i_1
            
            do
                *(rax_14 + 0x60) = &data_142e0b890
                *rax_14 = &data_142e0b890
                rax_14 += 0xb8
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        int32_t i_8 = rbp_3[0x6a].d
        void* rsi_1 = rbp_3[0x69]
        int32_t r8_1 = *(arg1 + 0x354)
        arg1[0x6a].d = i_8
        
        if (i_8 != 0 || r8_1 != 0)
            sub_1409768a0(&arg1[0x69], i_8, r8_1)
            void*** r8_2 = arg1[0x69]
            
            if (i_8 != 0)
                void* rcx_20 = &r8_2[0xe]
                void* rdx_9 = rsi_1 + 0x70
                int32_t i_2
                
                do
                    *r8_2 = &data_142e0b890
                    rcx_20 += 0xb8
                    r8_2 = &r8_2[0x17]
                    *(rcx_20 - 0x120) = *(rdx_9 - 0x68)
                    int32_t rax_16 = *(rdx_9 - 0x60)
                    rdx_9 += 0xb8
                    *(rcx_20 - 0x118) = rax_16
                    *(rcx_20 - 0x114) = *(rdx_9 - 0x114)
                    *(rcx_20 - 0x110) = *(rdx_9 - 0x110)
                    *(rcx_20 - 0x10f) = *(rdx_9 - 0x10f)
                    *(rcx_20 - 0x10c) = *(rdx_9 - 0x10c)
                    *(rcx_20 - 0x108) = *(rdx_9 - 0x108)
                    *(rcx_20 - 0x104) = *(rdx_9 - 0x104)
                    *(rcx_20 - 0x100) = *(rdx_9 - 0x100)
                    r8_2[-0x17] = &data_14323d4b8
                    *(rcx_20 - 0xf8) = *(rdx_9 - 0xf8)
                    *(rcx_20 - 0xf4) = *(rdx_9 - 0xf4)
                    *(rcx_20 - 0xf0) = *(rdx_9 - 0xf0)
                    *(rcx_20 - 0xec) = *(rdx_9 - 0xec)
                    *(rcx_20 - 0xe8) = *(rdx_9 - 0xe8)
                    *(rcx_20 - 0xe0) = *(rdx_9 - 0xe0)
                    *(rcx_20 - 0xd8) = *(rdx_9 - 0xd8)
                    *(rcx_20 - 0xd0) = *(rdx_9 - 0xd0)
                    *(rcx_20 - 0xc8) = &data_142e0b890
                    *(rcx_20 - 0xc0) = *(rdx_9 - 0xc0)
                    *(rcx_20 - 0xb8) = *(rdx_9 - 0xb8)
                    *(rcx_20 - 0xb4) = *(rdx_9 - 0xb4)
                    *(rcx_20 - 0xb0) = *(rdx_9 - 0xb0)
                    *(rcx_20 - 0xaf) = *(rdx_9 - 0xaf)
                    *(rcx_20 - 0xac) = *(rdx_9 - 0xac)
                    *(rcx_20 - 0xa8) = *(rdx_9 - 0xa8)
                    *(rcx_20 - 0xa4) = *(rdx_9 - 0xa4)
                    *(rcx_20 - 0xa0) = *(rdx_9 - 0xa0)
                    *(rcx_20 - 0x98) = *(rdx_9 - 0x98)
                    *(rcx_20 - 0x97) = *(rdx_9 - 0x97)
                    *(rcx_20 - 0x94) = *(rdx_9 - 0x94)
                    *(rcx_20 - 0x90) = *(rdx_9 - 0x90)
                    *(rcx_20 - 0x8c) = *(rdx_9 - 0x8c)
                    *(rcx_20 - 0x88) = *(rdx_9 - 0x88)
                    *(rcx_20 - 0x87) = *(rdx_9 - 0x87)
                    *(rcx_20 - 0x84) = *(rdx_9 - 0x84)
                    *(rcx_20 - 0x80) = *(rdx_9 - 0x80)
                    *(rcx_20 - 0x78) = *(rdx_9 - 0x78)
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
        else
            *(arg1 + 0x354) = 0
    
    if (&arg1[0x66] != &rbp_3[0x66])
        int32_t i_9 = arg1[0x67].d
        
        if (i_9 != 0)
            int64_t* rbx_3 = arg1[0x66] + 0x20
            int32_t i_3
            
            do
                int64_t rcx_21 = *rbx_3
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                sub_141ddf650(&rbx_3[-2])
                rbx_3 = &rbx_3[6]
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
        
        int32_t i_10 = rbp_3[0x67].d
        void* rbx_4 = rbp_3[0x66]
        int32_t r8_3 = *(arg1 + 0x33c)
        arg1[0x67].d = i_10
        
        if (i_10 != 0 || r8_3 != 0)
            sub_1405a4b40(&arg1[0x66], i_10, r8_3)
            int64_t* r14_2 = arg1[0x66]
            
            if (i_10 != 0)
                void* rbx_5 = rbx_4 + 0x28
                void* rdi_1 = r14_2 + 0x2c
                int32_t i_4
                
                do
                    *r14_2 = *(rbx_5 - 0x28)
                    *(rdi_1 - 0x24) = *(rbx_5 - 0x20)
                    *(rdi_1 - 0x1c) = 0
                    sub_141ddd330(rdi_1 - 0x1c, *(rbx_5 - 0x18), *(rbx_5 - 0x10), 0, 0)
                    *(rdi_1 - 0xc) = 0
                    int64_t rsi_3 = sx.q(*rbx_5)
                    int64_t rax_53 = *(rbx_5 - 8)
                    *(rdi_1 - 4) = rsi_3.d
                    
                    if (rsi_3.d != 0)
                        sub_1407c35c0(rdi_1 - 0xc, rsi_3.d, 0)
                        memcpy(*(rdi_1 - 0xc), rax_53, (rsi_3 << 6).d)
                    else
                        *rdi_1 = 0
                    
                    r14_2 = &r14_2[6]
                    rdi_1 += 0x30
                    rbx_5 += 0x30
                    i_4 = i_10
                    i_10 -= 1
                while (i_4 != 1)
        else
            *(arg1 + 0x33c) = i_10
    
    if (&arg1[0x89] != &rbp_3[0x89])
        int64_t rdi_2 = sx.q(rbp_3[0x92].d)
        void* rbx_6 = &arg1[0x90]
        sub_1405a4aa0(rbx_6, 0, rdi_2.d, 4)
        void* rax_54 = rbp_3[0x91]
        void* rdx_14 = &rbp_3[0x90]
        void* r9_1 = *(rbx_6 + 8)
        
        if (rax_54 != 0)
            rdx_14 = rax_54
        
        if (r9_1 != 0)
            rbx_6 = r9_1
        
        memcpy(rbx_6, rdx_14, (rdi_2 << 2).d)
        arg1[0x92].d = rdi_2.d
        sub_141ddfc00(&arg1[0x89], &rbp_3[0x89])
    
    result = zx.q(rbp_3[0x6c].d - *(rbp_3 + 0x38c))
    
    if (arg1[0x6c].d - *(arg1 + 0x38c) != result.d)
    label_141dee079:
        
        if (&arg1[0x6b] != &rbp_3[0x6b])
            int64_t rdi_3 = sx.q(rbp_3[0x74].d)
            void* rbx_7 = &arg1[0x72]
            sub_1405a4aa0(rbx_7, 0, rdi_3.d, 4)
            void* rax_56 = rbp_3[0x73]
            void* rdx_17 = &rbp_3[0x72]
            void* r9_2 = *(rbx_7 + 8)
            
            if (rax_56 != 0)
                rdx_17 = rax_56
            
            if (r9_2 != 0)
                rbx_7 = r9_2
            
            memcpy(rbx_7, rdx_17, (rdi_3 << 2).d)
            arg1[0x74].d = rdi_3.d
            return sub_141ddfc00(&arg1[0x6b], &rbp_3[0x6b])
    else
        result = sub_141dee810(&arg1[0x6b], &rbp_3[0x6b])
        
        if (result.b == 0)
            goto label_141dee079

return result
