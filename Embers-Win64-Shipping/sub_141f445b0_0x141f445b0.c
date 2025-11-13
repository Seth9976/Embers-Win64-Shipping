// 函数: sub_141f445b0
// 地址: 0x141f445b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
uint32_t zmm6[0x4]

if (rcx != 0 && sub_141e07c90(rcx) != 0)
    zmm6 = sub_141e09d20(*arg2)

int64_t* rbx = arg1[0xd8]
int64_t rsi = 0
uint64_t result = &rbx[arg1[0xd9]]
uint64_t r15_1 = sx.q(arg1[0xd9].d) << 3 u>> 3

if (rbx u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rbp_1 = *rbx
        result = sub_141e07c90(rbp_1)
        
        if (result.b != 0)
            result, zmm6 = sub_141e09d20(rbp_1)
        
        rbx = &rbx[1]
        rsi += 1
    while (rsi != r15_1)

void* rcx_4 = arg1[0xcb]

if (rcx_4 != 0)
    result = sub_141e07c90(rcx_4)
    
    if (result.b != 0 && (*(arg1 + 0x719) & 1) == 0)
        result, zmm6 = sub_141e09d20(arg1[0xcb])

if ((arg1[0x11].b & 1) != 0)
    if (*data_143f3b590 == 0)
        if (*(arg2 + 0x67) != 0)
            sub_141f38350(&arg1[0xde], &arg1[0xd4])
        
        if (*(arg2 + 0x66) != 0)
            int32_t rax_4 = *(arg1 + 0x6ec)
            arg1[0xdd].d = 0
            
            if (rax_4 s< 0 && rax_4 != 0)
                sub_1405a5220(&arg1[0xdc], 0)
            
            sub_141f2b4a0(&arg1[0xdc], &arg1[(sx.q(arg1[0x92].d) + 0x45) * 2])
            int32_t rax_5 = *(arg1 + 0x6dc)
            arg1[0xdb].d = 0
            
            if (rax_5 s< 0 && rax_5 != 0)
                sub_1405a5220(&arg1[0xda], 0)
            
            sub_141f2b4a0(&arg1[0xda], &arg1[0xcf])
        
        if (*(arg2 + 0x64) != 0)
            uint32_t var_28_1[0x4] = zmm6
            
            if ((arg1[0xb5].b & 2) == 0 || arg1[0xc6] == 0)
                zmm6 = *(arg1 + 0x564)
            else
                int64_t* rcx_11 = arg1[0xca]
                
                if (rcx_11 != 0)
                    (*(*rcx_11 + 0x2a0))(rcx_11)
                
                int64_t rsi_1 = 0
                int64_t* rbx_1 = arg1[0xd8]
                uint64_t r15_3 = sx.q(arg1[0xd9].d) << 3 u>> 3
                
                if (rbx_1 u> &rbx_1[arg1[0xd9]])
                    r15_3 = 0
                
                if (r15_3 != 0)
                    do
                        int64_t* rcx_12 = *rbx_1
                        (*(*rcx_12 + 0x2a0))(rcx_12)
                        rsi_1 += 1
                        rbx_1 = &rbx_1[1]
                    while (rsi_1 != r15_3)
                
                int64_t* rcx_13 = arg1[0xcb]
                
                if (rcx_13 != 0)
                    (*(*rcx_13 + 0x2a0))(rcx_13)
                
                zmm6 = sub_141f62ee0(arg1[0xc6])
            
            sub_141ded7c0(&arg1[0xcf], &arg1[0xda], zmm6, &arg1[0xfc])
            sub_141f41c10(&arg1[0xd4], &arg1[0xde], 
                sub_141f3a7d0(arg1, arg1[0x86], &arg1[0xcf], 
                    &arg1[(sx.q(arg1[0x92].d) + 0x45) * 2]))
    
    if (*(arg2 + 0x65) != 0 || *(arg2 + 0x64) != 0)
        sub_141f46470(arg1)
        int64_t* rcx_20 = arg1[0xca]
        
        if (rcx_20 != 0)
            sub_141e0f960(rcx_20)
            int64_t rsi_2 = 0
            int64_t* rbx_2 = arg1[0xd8]
            uint64_t r15_5 = sx.q(arg1[0xd9].d) << 3 u>> 3
            
            if (rbx_2 u> &rbx_2[arg1[0xd9]])
                r15_5 = 0
            
            if (r15_5 != 0)
                do
                    sub_141df5f50(*rbx_2, arg1[0xca])
                    rsi_2 += 1
                    rbx_2 = &rbx_2[1]
                while (rsi_2 != r15_5)
        
        void* rcx_22 = arg1[0x86]
        
        if (rcx_22 != 0 && arg1[0x127].d - *(arg1 + 0x964) s> 0)
            sub_141de1ba0(rcx_22, &arg1[0x126], &arg1[0xa5], &arg1[0xa7])
        
        int64_t* rcx_23 = arg1[0xcb]
        
        if (rcx_23 != 0)
            int64_t* rdx_11 = arg1[0xca]
            
            if (rdx_11 == 0)
                sub_141e0f960(rcx_23)
            else
                sub_141df5f50(rcx_23, rdx_11)
        
        if (*(arg2 + 0x65) != 0)
            int64_t* rcx_24 = arg1[0xca]
            
            if (rcx_24 != 0)
                sub_141e09af0(rcx_24)
                int64_t rsi_3 = 0
                int64_t* rbx_3 = arg1[0xd8]
                uint64_t r15_7 = sx.q(arg1[0xd9].d) << 3 u>> 3
                
                if (rbx_3 u> &rbx_3[arg1[0xd9]])
                    r15_7 = 0
                
                if (r15_7 != 0)
                    do
                        sub_141e09af0(*rbx_3)
                        rsi_3 += 1
                        rbx_3 = &rbx_3[1]
                    while (rsi_3 != r15_7)
            
            int64_t* rcx_26 = arg1[0xcb]
            
            if (rcx_26 != 0)
                sub_141e09af0(rcx_26)
        
        arg1[0xb5].b |= 0x40
        
        if (arg1[0x101].d s> 0 || (*(arg1 + 0x71c) & 2) != 0)
            if ((*(arg1 + 0x71e) & 2) == 0)
            label_141f449cb:
                sub_142255900(arg1, &arg1[(sx.q(arg1[0x92].d) + 0x45) * 2], 0, 1, 0)
                sub_142255c50(arg1)
            else if (*(arg2 + 0x65) != 0)
                if (*(arg2 + 0x64) == 0)
                    goto label_141f449cb
                
                sub_142255900(arg1, &arg1[0xda], 0, 1, 0)
                sub_142255c50(arg1)
        
        result = sub_142253600(arg1)
        
        if (result.b == 0)
            result = sub_142249610(arg1)
    else
        result = sub_141f375c0(arg1)
    
    __builtin_memset(&arg1[0x13e], 0, 0x18)

return result
