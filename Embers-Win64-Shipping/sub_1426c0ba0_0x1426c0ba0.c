// 函数: sub_1426c0ba0
// 地址: 0x1426c0ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6_1 = sub_141efce60(arg1, arg2.d)

if (arg1[0x16] == 0)
    void* rbx_1 = arg1[0x14]
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14255d000()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        void* const rax_4
        
        if (rax_2.d s<= *(rdx_1 + 0x38))
            rax_4 = rbx_1
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rax_4 = nullptr
        
        arg1[0x16] = rax_4
        
        if (rax_4 == 0)
            void* rax_5 = sub_142497110()
            void* rdx_2 = *(rbx_1 + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                arg1[0x16] = *(rbx_1 + 0x250)

uint64_t result = zx.q(arg1[0x1a].d)

if (result.d s> 1)
    sub_1426a3570(arg1[0x19], result.d, arg3)
    result = zx.q(arg1[0x1a].d)

if (result.d s> 0)
    int64_t* rsi_1 = nullptr
    int32_t i = 0
    int64_t r15_1 = 4
    
    do
        int64_t rcx_3 = arg1[0x19]
        int64_t* rbx_2 = *(rsi_1 + rcx_3)
        
        if (rbx_2 != 0)
            int32_t rax_9 = *(rsi_1 + rcx_3 + 8)
            
            if (rax_9 == 1)
                sub_1426b9890(arg1[0x17] + (sx.q(*(rsi_1 + rcx_3 + 0xc)) << 3), rbx_2)
            else if (rax_9 == 2)
                int128_t zmm1 = *(rsi_1 + rcx_3)
                rbx_2 = zmm1.q
                
                if (*(rbx_2 + 0x84) s< 2)
                    *(rbx_2 + 0x84) = 2
                
                int64_t* rcx_6 = rbx_2[5]
                
                if (rcx_6 != 0)
                    sub_1426a8a50(rcx_6, 0)
                
                int32_t rax_14 = (*(*rbx_2 + 0x2a8))(rbx_2, 0)
                
                if (rax_14 != 4)
                    rax_14 = 4
                
                if (rax_14 s> *(rbx_2 + 0x84))
                    *(rbx_2 + 0x84) = rax_14
                    
                    if (rax_14 == 4)
                        sub_1426be890(rbx_2, 3)
                
                sub_1426b9890(arg1[0x17] + (sx.q(zmm1:0xc.d) << 3), rbx_2)
            else if (rax_9 s> 2)
                if (rax_9 s<= 4)
                    sub_1426b9890(arg1[0x17] + (sx.q(*(rsi_1 + rcx_3 + 0xc)) << 3), rbx_2)
                else if (rax_9 == 5)
                    int64_t rbp_1 = sx.q(*(rsi_1 + rcx_3 + 0xc))
                    int64_t r14_1 = arg1[0x17]
                    int64_t* rcx_4 = *(r14_1 + (rbp_1 << 3))
                    
                    if (rcx_4 != 0)
                        int64_t* rax_10 = rcx_4
                        
                        if ((rcx_4[0x12].b & 1) == 0 && *(rcx_4 + 0x84) != 0)
                            (*(*rcx_4 + 0x288))(rcx_4, rbx_2)
                            rax_10 = *(r14_1 + (rbp_1 << 3))
                        
                        rax_10[5] = rbx_2
                        rbx_2[6] = *(r14_1 + (rbp_1 << 3))
                    
                    *(r14_1 + (rbp_1 << 3)) = rbx_2
                    void* j = rbx_2[6]
                    *(rbx_2 + 0x8c) = 0
                    
                    if (j != 0)
                        int32_t rcx_5 = 0
                        
                        do
                            rcx_5 += 1
                            *(rbx_2 + 0x8c) = rcx_5
                            j = *(j + 0x30)
                        while (j != 0)
        
        i += 1
        rsi_1 = &rsi_1[3]
    while (i s< arg1[0x1a].d)
    
    arg1[0x1a].d = 0
    
    if (*(arg1 + 0xd4) s<= 0xffffffff)
        sub_1405a5130(&arg1[0x19], 0)
    
    result = arg1[0x17] + 0x20
    int64_t* rbx_3
    int64_t temp0_1
    
    do
        rbx_3 = *result
        
        if (rbx_3 != 0)
            break
        
        result -= 8
        temp0_1 = r15_1
        r15_1 -= 1
    while (temp0_1 - 1 s>= 0)
    int64_t* rcx_12 = arg1[0x1b]
    
    if (rcx_12 != rbx_3)
        if (rcx_12 != 0)
            if (rcx_12[0x11].d != 1 || (rcx_12[0x12].b & 1) != 0 || *(rcx_12 + 0x84) != 1)
                result.b = 0
            else
                result.b = 1
            
            if (result.b != 0)
                (*(*rcx_12 + 0x288))(rcx_12, rbx_3)
        
        arg1[0x1b] = rbx_3
        char rax_19
        
        if (rbx_3 != 0)
            if (*(rbx_3 + 0x84) == 0 || (rbx_3[0x12].b & 1) == 0)
                rax_19 = (*(*rbx_3 + 0x280))(rbx_3)
            else
                rax_19 = (*(*rbx_3 + 0x290))(rbx_3)
        
        if (rbx_3 == 0 || rax_19 != 0)
            result = arg1[0x1b]
            
            if (result == 0 || *(result + 0x60) != 1)
                result = sub_1426c2180(arg1)
        else
            rbx_3[0x12].d |= 4
            
            if (rbx_3[0x11].d != 3)
                rbx_3[0x11].d = 3
            
            result = sub_1426be890(rbx_3, 1)
            arg1[0x1b] = 0
    else if (rcx_12 == 0)
        result = sub_1426c2180(arg1)
    else if (rcx_12[0x11].d s> 1)
        result = sub_1426a8e90(rcx_12)

int64_t* rcx_18 = arg1[0x1b]

if (rcx_18 != 0)
    int64_t* rdx_7 = rcx_18[5]
    
    if (rdx_7 == 0)
        result = zx.q(rcx_18[0x12].d)
        
        if ((result.b & 8) != 0 && (result.b & 1) == 0)
            result = (*(*rcx_18 + 0x278))(rcx_18, zmm6_1)
    else
        result = (*(*rdx_7 + 0x278))(rdx_7, zmm6_1)

if (arg1[0x1a].d == 0)
    void* rax_22 = arg1[0x1b]
    
    if (rax_22 != 0)
        result = zx.q(*(rax_22 + 0x90) u>> 3)
    
    if (rax_22 == 0 || (result.b & 1) == 0)
        jump(*(*arg1 + 0x340))

return result
