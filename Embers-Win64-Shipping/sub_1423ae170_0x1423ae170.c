// 函数: sub_1423ae170
// 地址: 0x1423ae170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0
int32_t i = 0

if (arg1[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rcx = *arg1
        void* rdi_1 = *(rsi_1 + rcx)
        
        if (*(rdi_1 + 8) != 1)
            bool z_1
            
            if (1 == *(rdi_1 + 0x48))
                *(rdi_1 + 0x48) = 2
                z_1 = true
            else
                *(rdi_1 + 0x48)
                z_1 = false
            
            if (z_1)
                sub_1423a7d70(rdi_1 + 0x10, 1)
                *(rdi_1 + 0x48) = 3
        else
            int64_t rdi_2 = sx.q(i) << 3
            int64_t* rcx_1 = *(rdi_2 + rcx)
            
            if (rcx_1 != 0)
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1)
                    (**rcx_1)(rcx_1, 1)
            
            int32_t rdx_3 = arg1[1].d
            int32_t rax_5 = rdx_3 - i - 1
            
            if (rax_5 s>= 1)
                rax_5 = 1
            
            if (rax_5 != 0)
                int64_t rcx_2 = *arg1
                memcpy(rcx_2 + rdi_2, rcx_2 + (sx.q(rdx_3 - rax_5) << 3), rax_5 << 3)
                rdx_3 = arg1[1].d
            
            arg1[1].d = rdx_3 - 1
            sub_1405c53d0(arg1)
            i -= 1
            rsi_1 -= 8
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[1].d)

int32_t i_1 = 0

if (arg1[7].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_6 = arg1[6]
        void* rdi_3 = *(rcx_6 + r14_1)
        
        if (*(rdi_3 + 8) != 1)
            bool z_2
            
            if (1 == *(rdi_3 + 0x38))
                *(rdi_3 + 0x38) = 2
                z_2 = true
            else
                *(rdi_3 + 0x38)
                z_2 = false
            
            if (z_2)
                sub_1423a7990(rdi_3 + 0x10)
                *(rdi_3 + 0x38) = 3
        else
            int64_t* rcx_7 = rcx_6[sx.q(i_1)]
            
            if (rcx_7 != 0)
                rcx_7[1].d -= 1
                
                if (rcx_7[1].d == 1)
                    (**rcx_7)(rcx_7, 1)
            
            int32_t rdx_6 = arg1[7].d
            int32_t rax_12 = rdx_6 - i_1 - 1
            
            if (rax_12 s>= 1)
                rax_12 = 1
            
            if (rax_12 != 0)
                int64_t rcx_8 = arg1[6]
                memcpy(rcx_8 + (sx.q(i_1) << 3), rcx_8 + (sx.q(rdx_6 - rax_12) << 3), rax_12 << 3)
                rdx_6 = arg1[7].d
            
            arg1[7].d = rdx_6 - 1
            sub_1405c53d0(&arg1[6])
            i_1 -= 1
            r14_1 -= 8
        
        i_1 += 1
        r14_1 += 8
    while (i_1 s< arg1[7].d)

int32_t i_2 = 0

if (arg1[3].d s> 0)
    int64_t r14_2 = 0
    
    do
        void** rcx_12 = arg1[2]
        void* rdi_5 = *(rcx_12 + r14_2)
        
        if (*(rdi_5 + 8) != 1)
            bool z_3
            
            if (1 == *(rdi_5 + 0x30))
                *(rdi_5 + 0x30) = 2
                z_3 = true
            else
                *(rdi_5 + 0x30)
                z_3 = false
            
            if (z_3)
                sub_1423a80f0(rdi_5 + 0x10)
                *(rdi_5 + 0x30) = 3
        else
            int64_t* rdi_6 = sx.q(i_2) << 3
            int64_t* rcx_13 = *(rdi_6 + rcx_12)
            
            if (rcx_13 != 0)
                rcx_13[1].d -= 1
                
                if (rcx_13[1].d == 1)
                    (**rcx_13)(rcx_13, 1)
            
            int32_t rdx_10 = arg1[3].d
            int32_t rax_19 = rdx_10 - i_2 - 1
            
            if (rax_19 s>= 1)
                rax_19 = 1
            
            if (rax_19 != 0)
                void* rcx_14 = arg1[2]
                memcpy(rcx_14 + rdi_6, rcx_14 + (sx.q(rdx_10 - rax_19) << 3), rax_19 << 3)
                rdx_10 = arg1[3].d
            
            arg1[3].d = rdx_10 - 1
            sub_1405c53d0(&arg1[2])
            i_2 -= 1
            r14_2 -= 8
        
        i_2 += 1
        r14_2 += 8
    while (i_2 s< arg1[3].d)

if (arg1[5].d s<= 0)
    return 

void** rsi_2 = nullptr

do
    int64_t rcx_18 = arg1[4]
    void* rbx = *(rsi_2 + rcx_18)
    
    if (*(rbx + 8) != 1)
        bool z_4
        
        if (1 == *(rbx + 0x18))
            *(rbx + 0x18) = 2
            z_4 = true
        else
            *(rbx + 0x18)
            z_4 = false
        
        if (z_4)
            sub_1423a7a80(rbx + 0x10)
            *(rbx + 0x18) = 3
    else
        int64_t rbx_1 = sx.q(i_3) << 3
        int64_t* rcx_19 = *(rbx_1 + rcx_18)
        
        if (rcx_19 != 0)
            rcx_19[1].d -= 1
            
            if (rcx_19[1].d == 1)
                (**rcx_19)(rcx_19, 1)
        
        int32_t rdx_14 = arg1[5].d
        int32_t rax_26 = rdx_14 - i_3 - 1
        
        if (rax_26 s>= 1)
            rax_26 = 1
        
        if (rax_26 != 0)
            int64_t rcx_20 = arg1[4]
            memcpy(rcx_20 + rbx_1, rcx_20 + (sx.q(rdx_14 - rax_26) << 3), rax_26 << 3)
            rdx_14 = arg1[5].d
        
        arg1[5].d = rdx_14 - 1
        sub_1405c53d0(&arg1[4])
        i_3 -= 1
        rsi_2 -= 8
    
    i_3 += 1
    rsi_2 = &rsi_2[1]
while (i_3 s< arg1[5].d)
