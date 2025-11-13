// 函数: sub_142630af0
// 地址: 0x142630af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(*arg7)
uint64_t i_8 = zx.q(arg7[1])
int32_t var_88 = r13.d
int32_t i_7 = i_8.d

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg5, 0xe)

int64_t rax_2 = data_143b502a8(zx.q(arg7[2]), 1)
int64_t rbx = rax_2
char* rax_3 = data_143b502a8(zx.q(arg7[2]), 1)
char* r12 = rax_3
int64_t result

if (rbx == 0 || rax_3 == 0)
    sub_14262d160(arg1, 3, "erodeWalkableArea: Out of memory 'dist' (%d).", zx.q(arg7[2]))
    result.b = 0
else
    memset(rbx, 0xff, sx.q(arg7[2]))
    memset(r12, 0, sx.q(arg7[2]))
    char rbp = arg2 * 2
    int32_t rdx = i_8.d
    int32_t rcx_4 = r13.d
    uint32_t r9 = zx.d(rbp)
    
    if ((arg6 & 1) == 0)
        sub_14261eee0(rcx_4, rdx, arg3, r9, arg7, rbx, r12)
    else
        sub_14261f150(rcx_4, rdx, arg3, r9.b, arg7, rbx, r12)
    
    int32_t* var_60
    int64_t var_50
    
    if (i_8.d s> 0)
        int64_t rdx_1 = r13 << 2
        int64_t var_70_1 = r13
        int64_t r9_1 = rdx_1
        uint64_t i_4 = i_8
        int64_t rcx_5 = 0
        int32_t var_68
        var_68.q = i_4
        int32_t* rax_4 = nullptr
        var_50 = 0
        int32_t rbp_2 = neg.d(r13.d)
        var_60 = nullptr
        int64_t r8_3 = r13
        uint64_t i
        
        do
            int32_t j = 0
            
            if (r13.d s> 0)
                int32_t* r11_1 = rax_4
                int32_t var_58
                var_58.q = rax_4
                
                do
                    int32_t rcx_6 = *(r11_1 + *(arg7 + 0x40))
                    uint64_t rax_7 = zx.q(rcx_6) & 0xffffff
                    uint64_t rdx_2 = zx.q(rax_7.d)
                    uint64_t rsi = zx.q(rax_7.d + (rcx_6 u>> 0x18))
                    
                    if (rdx_2 u< rsi)
                        uint64_t rdi_2 = rax_7 * 0xc
                        char* r9_2 = rax_7 + rbx
                        void* r13_2 = r12 - rbx
                        uint64_t k_1 = rsi - rdx_2
                        uint64_t k
                        
                        do
                            int64_t r10_1 = *(arg7 + 0x48)
                            char r8_4 = *(r9_2 + r13_2)
                            uint32_t rdx_4 = zx.d((*(r10_1 + rdi_2 + 4)).b)
                            
                            if (rdx_4 != 0xff)
                                uint64_t rcx_10 =
                                    zx.q((*(r11_1 + *(arg7 + 0x40) - 4) & 0xffffff) + rdx_4)
                                char r10_2 = -1
                                int32_t rcx_12 = zx.d(*(rcx_10 + rax_2)) + 2
                                
                                if (rcx_12 u< 0xff)
                                    r10_2 = rcx_12.b
                                
                                char rax_12 = *r9_2
                                
                                if (r10_2 u>= rax_12)
                                    r10_2 = rax_12
                                else
                                    *r9_2 = r10_2
                                
                                char rax_13 = r12[zx.q(rcx_10.d)]
                                
                                if (rax_13 != 0xff)
                                    char rdx_6 = 0
                                    
                                    if (zx.d(rax_13) - 2 s> 0)
                                        rdx_6 = rax_13 - 2
                                    
                                    char rcx_15 = rdx_6
                                    
                                    if (r8_4 u> rdx_6)
                                        rcx_15 = r8_4
                                    
                                    r8_4 = rcx_15
                                
                                uint32_t r11_3 = zx.d(*(r10_1 + rcx_10 * 0xc + 7))
                                
                                if (r11_3 != 0xff)
                                    uint64_t rdx_9 = zx.q((
                                        *(*(arg7 + 0x40) + (sx.q(j + rbp_2) << 2) - 4) & 0xffffff)
                                        + r11_3)
                                    char rdx_10 = -1
                                    int32_t rcx_18 = zx.d(*(rdx_9 + rax_2)) + 3
                                    
                                    if (rcx_18 u< 0xff)
                                        rdx_10 = rcx_18.b
                                    
                                    if (rdx_10 u< r10_2)
                                        *r9_2 = rdx_10
                                    
                                    char rax_20 = r12[zx.q(rdx_9.d)]
                                    
                                    if (rax_20 != 0xff)
                                        char rdx_11 = 0
                                        
                                        if (zx.d(rax_20) - 3 s> 0)
                                            rdx_11 = rax_20 - 3
                                        
                                        char rcx_21 = rdx_11
                                        
                                        if (r8_4 u> rdx_11)
                                            rcx_21 = r8_4
                                        
                                        r8_4 = rcx_21
                            
                            uint32_t r10_3 = zx.d(*(r10_1 + rdi_2 + 7))
                            
                            if (r10_3 == 0xff)
                                rbx = rax_2
                            else
                                char r11_5 = *r9_2
                                uint64_t rdx_14 = zx.q((*(*(arg7 + 0x40) + (sx.q(j + rbp_2) << 2))
                                    & 0xffffff) + r10_3)
                                void* rbx_2 = *(arg7 + 0x48) + rdx_14 * 0xc
                                char rdx_15 = -1
                                int32_t rcx_25 = zx.d(*(rdx_14 + rax_2)) + 2
                                
                                if (rcx_25 u< 0xff)
                                    rdx_15 = rcx_25.b
                                
                                if (rdx_15 u< r11_5)
                                    *r9_2 = rdx_15
                                    r11_5 = rdx_15
                                
                                char rax_28 = r12[zx.q(rdx_14.d)]
                                
                                if (rax_28 != 0xff)
                                    char rdx_16 = 0
                                    
                                    if (zx.d(rax_28) - 2 s> 0)
                                        rdx_16 = rax_28 - 2
                                    
                                    char rcx_28 = rdx_16
                                    
                                    if (r8_4 u> rdx_16)
                                        rcx_28 = r8_4
                                    
                                    r8_4 = rcx_28
                                
                                char r10_5 = *(rbx_2 + 6)
                                rbx = rax_2
                                
                                if (r10_5 != 0xff)
                                    uint64_t rdx_19 = zx.q((
                                        *(*(arg7 + 0x40) + (sx.q(j + rbp_2) << 2) + 4) & 0xffffff)
                                        + zx.d(r10_5))
                                    char rdx_20 = -1
                                    int32_t rcx_31 = zx.d(*(rdx_19 + rbx)) + 3
                                    
                                    if (rcx_31 u< 0xff)
                                        rdx_20 = rcx_31.b
                                    
                                    if (rdx_20 u< r11_5)
                                        *r9_2 = rdx_20
                                    
                                    char rax_35 = r12[zx.q(rdx_19.d)]
                                    
                                    if (rax_35 != 0xff)
                                        char rdx_21 = 0
                                        
                                        if (zx.d(rax_35) - 3 s> 0)
                                            rdx_21 = rax_35 - 3
                                        
                                        char rcx_34 = rdx_21
                                        
                                        if (r8_4 u> rdx_21)
                                            rcx_34 = r8_4
                                        
                                        r8_4 = rcx_34
                            
                            if (*(r9_2 + r13_2) != 0xff)
                                *(r9_2 + r13_2) = r8_4
                            
                            r11_1 = var_58.q
                            rdi_2 += 0xc
                            r9_2 = &r9_2[1]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        r13 = zx.q(var_88)
                    
                    r11_1 = &r11_1[1]
                    j += 1
                    var_58.q = r11_1
                while (j s< r13.d)
                
                rax_4 = var_60
                rcx_5 = var_50
                i_4 = var_68.q
                r8_3 = var_70_1
                r9_1 = rdx_1
            
            rcx_5 += r8_3
            rax_4 += r9_1
            rbp_2 += r13.d
            var_50 = rcx_5
            i = i_4
            i_4 -= 1
            var_60 = rax_4
            var_68.q = i_4
        while (i != 1)
        i_8 = zx.q(i_7)
    
    int32_t rax_38 = (i_8 - 1).d
    int32_t var_68_1 = rax_38
    
    if (rax_38 s>= 0)
        int32_t r8_5 = (r13 - 1).d
        int32_t rdx_23 = neg.d(r13.d)
        int32_t var_58_1 = r8_5
        var_50.d = rdx_23
        int32_t rcx_36 = rax_38 * r13.d
        int32_t r13_4 = (rax_38 + 1) * var_88
        var_60.d = rcx_36
        
        while (true)
            int32_t r14_1 = r8_5
            
            if (r8_5 s>= 0)
                int32_t rax_39 = rcx_36 + r14_1
                int32_t r8_6 = r8_5 + 1
                int64_t rcx_38 = sx.q(rax_39) << 2
                int32_t var_84_1 = r8_6
                int64_t r11_7 = sx.q(rax_39 + 1) << 2
                int64_t var_70_2 = r11_7
                int64_t var_40_1 = rcx_38
                
                while (true)
                    int32_t rcx_39 = *(rcx_38 + *(arg7 + 0x40))
                    uint64_t rax_43 = zx.q(rcx_39) & 0xffffff
                    uint64_t rdx_24 = zx.q(rax_43.d)
                    uint64_t rbp_3 = zx.q(rax_43.d + (rcx_39 u>> 0x18))
                    
                    if (rdx_24 u< rbp_3)
                        void* rdi_4 = r12 - rbx
                        int64_t rsi_2 = rax_43 * 0xc
                        void* var_78_2 = rdi_4
                        char* r9_3 = rax_43 + rbx
                        uint64_t i_5 = rbp_3 - rdx_24
                        uint64_t i_1
                        
                        do
                            void* rdx_25 = *(arg7 + 0x48)
                            char r8_7 = *(rdx_25 + rsi_2 + 6)
                            char r10_7 = *(r9_3 + rdi_4)
                            
                            if (r8_7 != 0xff)
                                char r11_8 = *r9_3
                                uint64_t rcx_43 =
                                    zx.q((*(r11_7 + *(arg7 + 0x40)) & 0xffffff) + zx.d(r8_7))
                                char rdx_26 = -1
                                int32_t rcx_45 = zx.d(*(rcx_43 + rax_2)) + 2
                                
                                if (rcx_45 u< 0xff)
                                    rdx_26 = rcx_45.b
                                
                                if (rdx_26 u< r11_8)
                                    *r9_3 = rdx_26
                                    r11_8 = rdx_26
                                
                                char rax_49 = *(zx.q(rcx_43.d) + r12)
                                
                                if (rax_49 != 0xff)
                                    char rdx_27 = 0
                                    
                                    if (zx.d(rax_49) - 2 s> 0)
                                        rdx_27 = rax_49 - 2
                                    
                                    char rcx_48 = rdx_27
                                    
                                    if (r10_7 u> rdx_27)
                                        rcx_48 = r10_7
                                    
                                    r10_7 = rcx_48
                                
                                char r8_9 = *(rdx_25 + rcx_43 * 0xc + 5)
                                
                                if (r8_9 == 0xff)
                                    rdi_4 = var_78_2
                                else
                                    uint64_t rdx_30 = zx.q((
                                        *(*(arg7 + 0x40) + (sx.q(var_84_1 + r13_4) << 2))
                                        & 0xffffff) + zx.d(r8_9))
                                    char rdx_31 = -1
                                    int32_t rcx_51 = zx.d(*(rdx_30 + rax_2)) + 3
                                    
                                    if (rcx_51 u< 0xff)
                                        rdx_31 = rcx_51.b
                                    
                                    if (rdx_31 u< r11_8)
                                        *r9_3 = rdx_31
                                    
                                    char rax_58 = *(zx.q(rdx_30.d) + r12)
                                    rdi_4 = var_78_2
                                    
                                    if (rax_58 != 0xff)
                                        char rdx_32 = 0
                                        
                                        if (zx.d(rax_58) - 3 s> 0)
                                            rdx_32 = rax_58 - 3
                                        
                                        char rcx_54 = rdx_32
                                        
                                        if (r10_7 u> rdx_32)
                                            rcx_54 = r10_7
                                        
                                        r10_7 = rcx_54
                            
                            char r8_11 = *(rdx_25 + rsi_2 + 5)
                            
                            if (r8_11 != 0xff)
                                char r11_9 = -1
                                char* rdx_35 = zx.q((*(*(arg7 + 0x40) + (sx.q(r14_1 + r13_4) << 2))
                                    & 0xffffff) + zx.d(r8_11))
                                void* rbx_4 = *(arg7 + 0x48) + rdx_35 * 0xc
                                int32_t rcx_58 = zx.d(rdx_35[rax_2]) + 2
                                
                                if (rcx_58 u< 0xff)
                                    r11_9 = rcx_58.b
                                
                                char rax_67 = *r9_3
                                
                                if (r11_9 u>= rax_67)
                                    r11_9 = rax_67
                                else
                                    *r9_3 = r11_9
                                
                                char rax_68 = *(rdx_35 + r12)
                                
                                if (rax_68 != 0xff)
                                    char rdx_36 = 0
                                    
                                    if (zx.d(rax_68) - 2 s> 0)
                                        rdx_36 = rax_68 - 2
                                    
                                    char rcx_61 = rdx_36
                                    
                                    if (r10_7 u> rdx_36)
                                        rcx_61 = r10_7
                                    
                                    r10_7 = rcx_61
                                
                                uint32_t r8_13 = zx.d((*(rbx_4 + 4)).b)
                                
                                if (r8_13 != 0xff)
                                    uint64_t rdx_39 = zx.q((
                                        *(*(arg7 + 0x40) + (sx.q(r14_1 + r13_4) << 2) - 4)
                                        & 0xffffff) + r8_13)
                                    char rdx_40 = -1
                                    int32_t rcx_64 = zx.d(*(rdx_39 + rax_2)) + 3
                                    
                                    if (rcx_64 u< 0xff)
                                        rdx_40 = rcx_64.b
                                    
                                    if (rdx_40 u< r11_9)
                                        *r9_3 = rdx_40
                                    
                                    char rax_75 = *(zx.q(rdx_39.d) + r12)
                                    
                                    if (rax_75 != 0xff)
                                        char rdx_41 = 0
                                        
                                        if (zx.d(rax_75) - 3 s> 0)
                                            rdx_41 = rax_75 - 3
                                        
                                        char rcx_67 = rdx_41
                                        
                                        if (r10_7 u> rdx_41)
                                            rcx_67 = r10_7
                                        
                                        r10_7 = rcx_67
                            
                            if (*(r9_3 + rdi_4) != 0xff)
                                *(r9_3 + rdi_4) = r10_7
                            
                            r11_7 = var_70_2
                            rsi_2 += 0xc
                            r9_3 = &r9_3[1]
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                        r8_6 = var_84_1
                    
                    r8_6 -= 1
                    rcx_38 = var_40_1 - 4
                    var_84_1 = r8_6
                    r11_7 -= 4
                    var_40_1 = rcx_38
                    int32_t temp1_1 = r14_1
                    r14_1 -= 1
                    var_70_2 = r11_7
                    
                    if (temp1_1 - 1 s< 0)
                        break
                    
                    rbx = rax_2
                
                rax_38 = var_68_1
                rcx_36 = var_60.d
                rdx_23 = var_50.d
                r8_5 = var_58_1
            
            rax_38 -= 1
            rcx_36 += rdx_23
            r13_4 += rdx_23
            var_68_1 = rax_38
            var_60.d = rcx_36
            
            if (rax_38 s< 0)
                break
            
            rbx = rax_2
        
        i_8 = zx.q(i_7)
    
    int64_t r13_5 = rax_2
    int32_t i_2 = 0
    
    if (arg7[2] s> 0)
        char* rcx_69 = nullptr
        
        do
            char* rax_78 = &rcx_69[r13_5]
            
            if (*(rax_78 + r12 - r13_5) != 0)
                rcx_69[*(arg7 + 0x58)] = arg4
            else if (*rax_78 u< rbp)
                rcx_69[*(arg7 + 0x58)] = 0
            
            i_2 += 1
            rcx_69 = &rcx_69[1]
        while (i_2 s< arg7[2])
        
        r12 = rax_3
    
    if ((arg6 & 2) != 0 && i_8.d s> 0)
        uint64_t i_6 = zx.q(i_7)
        int32_t* rsi_3 = nullptr
        int64_t rax_81 = sx.q(var_88)
        uint64_t i_3
        
        do
            if (rax_81.d s> 0)
                int32_t* rbx_5 = rsi_3
                uint64_t j_2 = zx.q(rax_81.d)
                uint64_t j_1
                
                do
                    uint32_t rax_82 = 0xffff
                    int32_t rdx_42 = *(rbx_5 + *(arg7 + 0x40))
                    int32_t rcx_72 = rdx_42 & 0xffffff
                    uint64_t r11_10 = zx.q(rcx_72)
                    char* rdx_45 = zx.q((rdx_42 u>> 0x18) + rcx_72) - 1
                    
                    if (rdx_45 s>= r11_10)
                        int64_t r8_18 = rdx_45 * 0xc
                        
                        do
                            int64_t rcx_73 = *(arg7 + 0x58)
                            void* r9_5 = *(arg7 + 0x48)
                            char rcx_74 = rdx_45[rcx_73]
                            
                            if (rcx_74 == arg4)
                                uint32_t rcx_75 = zx.d(*(r9_5 + r8_18))
                                
                                if (rcx_75 s<= rax_82)
                                    rax_82 = rcx_75 - arg3
                                    
                                    if (rcx_75 - arg3 s< 0)
                                        rax_82 = 0
                                else
                                    rdx_45[rcx_73] = 0
                            else if (rcx_74 != 0)
                                rax_82 = zx.d(*(r9_5 + r8_18))
                            
                            rdx_45 -= 1
                            r8_18 -= 0xc
                        while (rdx_45 s>= r11_10)
                    
                    rbx_5 = &rbx_5[1]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rax_81 = zx.q(var_88)
            
            rsi_3 = &rsi_3[rax_81]
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
        r12 = rax_3
        r13_5 = rax_2
    
    data_143b502b0(r13_5)
    data_143b502b0(r12)
    
    if (*(arg1 + 9) != 0)
        (*(*arg1 + 0x28))(arg1, 0xe)
    
    result.b = 1

return result
