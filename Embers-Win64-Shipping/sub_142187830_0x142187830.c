// 函数: sub_142187830
// 地址: 0x142187830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg2 + 0x48))
int32_t rsi = 0
*(arg1 + 0x108) = 0

if (*(arg1 + 0x10c) != rbx.d)
    sub_1405c5570(arg1 + 0x100, rbx.d)
    rsi = *(arg1 + 0x108)

int32_t rax = rsi + rbx.d
*(arg1 + 0x108) = rax

if (rax s> *(arg1 + 0x10c))
    sub_1405a4d70(arg1 + 0x100)

int64_t count = rbx << 3
memset(*(arg1 + 0x100) + (sx.q(rsi) << 3), 0, count)
int32_t rsi_1 = 0
*(arg1 + 0x118) = 0

if (*(arg1 + 0x11c) != rbx.d)
    sub_1405c5570(arg1 + 0x110, rbx.d)
    rsi_1 = *(arg1 + 0x118)

int32_t rax_2 = rsi_1 + rbx.d
*(arg1 + 0x118) = rax_2

if (rax_2 s> *(arg1 + 0x11c))
    sub_1405a4d70(arg1 + 0x110)

memset(*(arg1 + 0x110) + (sx.q(rsi_1) << 3), 0, count)
int32_t rsi_2 = 0
*(arg1 + 0x128) = 0

if (*(arg1 + 0x12c) != rbx.d)
    sub_1405c5570(arg1 + 0x120, rbx.d)
    rsi_2 = *(arg1 + 0x128)

int32_t rax_4 = rsi_2 + rbx.d
*(arg1 + 0x128) = rax_4

if (rax_4 s> *(arg1 + 0x12c))
    sub_1405a4d70(arg1 + 0x120)

memset(*(arg1 + 0x120) + (sx.q(rsi_2) << 3), 0, count)
int32_t rsi_3 = 0
*(arg1 + 0x138) = 0

if (*(arg1 + 0x13c) != rbx.d)
    sub_1405c5570(arg1 + 0x130, rbx.d)
    rsi_3 = *(arg1 + 0x138)

int32_t rax_6 = rsi_3 + rbx.d
*(arg1 + 0x138) = rax_6

if (rax_6 s> *(arg1 + 0x13c))
    sub_1405a4d70(arg1 + 0x130)

memset(*(arg1 + 0x130) + (sx.q(rsi_3) << 3), 0, count)
int32_t rsi_4 = 0
*(arg1 + 0x148) = 0

if (*(arg1 + 0x14c) != rbx.d)
    sub_1405c5570(arg1 + 0x140, rbx.d)
    rsi_4 = *(arg1 + 0x148)

int32_t rax_8 = rsi_4 + rbx.d
*(arg1 + 0x148) = rax_8

if (rax_8 s> *(arg1 + 0x14c))
    sub_1405a4d70(arg1 + 0x140)

memset(*(arg1 + 0x140) + (sx.q(rsi_4) << 3), 0, count)
int32_t result = 0
int64_t rdi_1 = 0
int32_t result_1 = 0

if (rbx.d s> 0)
    void* rcx_20 = arg2
    int64_t rdx_10 = rbx
    
    do
        void* rbp
        
        if (result s< *(rcx_20 + 0x48))
            rbp = *(*(rcx_20 + 0x40) + (rdi_1 << 3))
            result = result_1
        else
            rbp = nullptr
        
        int32_t i = 0
        
        if (*(rbp + 0x40) s> 0)
            int64_t* r14_2 = nullptr
            
            do
                int64_t* rbx_2 = *(r14_2 + *(rbp + 0x38))
                
                if ((*(*rbx_2 + 0x2b8))(rbx_2) == 2 && (rbx_2[5].b & 0x80) != 0)
                    void* rax_13 = sub_1425510b0()
                    void* rdx_11 = rbx_2[2]
                    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                    
                    if (rax_14.d s> *(rdx_11 + 0x38)
                            || *(*(rdx_11 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                        void* rax_20 = sub_142551180()
                        void* rdx_13 = rbx_2[2]
                        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_21.d s> *(rdx_13 + 0x38)
                                || *(*(rdx_13 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                            void* rax_27 = sub_142550fe0()
                            void* rdx_15 = rbx_2[2]
                            int64_t rax_28 = sx.q(*(rax_27 + 0x38))
                            
                            if (rax_28.d s> *(rdx_15 + 0x38)
                                    || *(*(rdx_15 + 0x30) + (rax_28 << 3)) != rax_27 + 0x30)
                                void* rax_34 = sub_142550ed0()
                                void* rdx_17 = rbx_2[2]
                                int64_t rax_35 = sx.q(*(rax_34 + 0x38))
                                
                                if (rax_35.d s<= *(rdx_17 + 0x38)
                                        && *(*(rdx_17 + 0x30) + (rax_35 << 3)) == rax_34 + 0x30)
                                    void* rax_37 = sub_142550ed0()
                                    void* rdx_18 = rbx_2[2]
                                    int64_t rax_38 = sx.q(*(rax_37 + 0x38))
                                    
                                    if (rax_38.d s> *(rdx_18 + 0x38)
                                            || *(*(rdx_18 + 0x30) + (rax_38 << 3))
                                            != rax_37 + 0x30)
                                        rbx_2 = nullptr
                                    
                                    if ((*(rbx_2 + 0x34) & 1) != 0 || (rbx_2[0x10].b & 1) != 0
                                            || (*(rbx_2 + 0xd4) & 1) != 0)
                                        char rax_40 = rbx_2[6].b
                                        
                                        if (rax_40 == 0)
                                            *(*(arg1 + 0x130) + (rdi_1 << 3)) = rbx_2
                                        else if (rax_40 == 1)
                                            *(*(arg1 + 0x140) + (rdi_1 << 3)) = rbx_2
                            else if (*(*(arg1 + 0x120) + (rdi_1 << 3)) == 0)
                                void* rax_31 = sub_142550fe0()
                                void* rdx_16 = rbx_2[2]
                                int64_t rax_32 = sx.q(*(rax_31 + 0x38))
                                
                                if (rax_32.d s> *(rdx_16 + 0x38)
                                        || *(*(rdx_16 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
                                    rbx_2 = nullptr
                                
                                *(*(arg1 + 0x120) + (rdi_1 << 3)) = rbx_2
                        else if (*(*(arg1 + 0x110) + (rdi_1 << 3)) == 0)
                            void* rax_24 = sub_142551180()
                            void* rdx_14 = rbx_2[2]
                            int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                            
                            if (rax_25.d s> *(rdx_14 + 0x38)
                                    || *(*(rdx_14 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
                                rbx_2 = nullptr
                            
                            *(*(arg1 + 0x110) + (rdi_1 << 3)) = rbx_2
                    else if (*(*(arg1 + 0x100) + (rdi_1 << 3)) == 0)
                        void* rax_17 = sub_1425510b0()
                        void* rdx_12 = rbx_2[2]
                        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                        
                        if (rax_18.d s> *(rdx_12 + 0x38)
                                || *(*(rdx_12 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                            rbx_2 = nullptr
                        
                        *(*(arg1 + 0x100) + (rdi_1 << 3)) = rbx_2
                
                i += 1
                r14_2 = &r14_2[1]
            while (i s< *(rbp + 0x40))
            
            result = result_1
            rcx_20 = arg2
            rdx_10 = rbx
        
        result += 1
        rdi_1 += 1
        result_1 = result
    while (rdi_1 s< rdx_10)

return result
