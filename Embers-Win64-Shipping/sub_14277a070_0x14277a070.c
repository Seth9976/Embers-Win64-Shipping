// 函数: sub_14277a070
// 地址: 0x14277a070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        return nullptr

int32_t rax = (rdx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

uint64_t rbp
rbp.b = 1
*(*arg2 + (rdx << 3)) = arg1
int64_t* rcx_2 = *(arg1 + 0xb8)

if (rcx_2 != 0)
    rbp.b = (*(*rcx_2 + 0x3e8))(rcx_2) != 2

int64_t* rcx_3 = *(arg1 + 0xc0)
void*** result = nullptr

if (rcx_3 != 0)
    char rdx_1 = 0
    
    if ((*(*rcx_3 + 0x3e8))(rcx_3) != 2)
        rdx_1 = rbp.b
    
    rbp = zx.q(rdx_1)

if (rbp.b != 0)
    int64_t* rdx_2 = *(arg1 + 0xb8)
    int64_t* rcx_5 = *(arg1 + 0xc0)
    void*** result_1
    uint32_t var_10_1
    void*** rcx_15
    int64_t rdx_3
    int64_t rdx_10
    void*** result_8
    void*** result_9
    int512_t zmm1
    
    if (rdx_2 != 0)
        int64_t r8_1 = *(*rdx_2 + 0x3e8)
        
        if (rcx_5 == 0)
            int32_t rax_44 = r8_1(rdx_2, rdx_2)
            
            if (rax_44 == 3)
                void*** rax_45
                rax_45, rdx_10 = j_sub_140a82f30(zx.q(rax_44 + 0x2d))
                
                if (rax_45 == 0)
                    return result
                
                int64_t* rcx_31 = *(arg1 + 0xb8)
                
                if (rcx_31 != 0)
                    int64_t r8_7 = *rcx_31
                    void*** result_5
                    result_5, rdx_10 = (*(r8_7 + 0x3f8))(rcx_31, arg2, r8_7)
                    result = result_5
                
                zmm1.o = *(arg1 + 0xb0)
                return sub_1417bf810(rax_45, rdx_10, result, nullptr, zx.d(*(arg1 + 0xc8)))
            
            int64_t* rcx_32 = *(arg1 + 0xb8)
            int32_t rax_47 = (*(*rcx_32 + 0x3e8))(rcx_32)
            
            if (rax_47 == 4)
                void*** rax_48
                rax_48, rdx_3 = j_sub_140a82f30(zx.q(rax_47 + 0x34))
                
                if (rax_48 == 0)
                    return result
                
                int64_t* rcx_34 = *(arg1 + 0xb8)
                
                if (rcx_34 == 0)
                    result_9 = nullptr
                else
                    int64_t r8_8 = *rcx_34
                    void*** result_11
                    result_11, rdx_3 = (*(r8_8 + 0x3f8))(rcx_34, arg2, r8_8)
                    result_9 = result_11
                
                result_8 = nullptr
                var_10_1 = zx.d(*(arg1 + 0xc8))
                rcx_15 = rax_48
                result_1 = nullptr
                goto label_14277a230
        else
            int32_t rax_7 = r8_1(rdx_2, rdx_2)
            int32_t rax_9
            
            if (rax_7 != 3)
                int64_t* rcx_7 = *(arg1 + 0xb8)
                rax_9 = (*(*rcx_7 + 0x3e8))(rcx_7)
            
            int32_t rax_11
            int32_t rax_13
            
            if (rax_7 == 3 || rax_9 == 1)
                int64_t* rcx_8 = *(arg1 + 0xc0)
                rax_11 = (*(*rcx_8 + 0x3e8))(rcx_8)
                
                if (rax_11 != 3)
                    int64_t* rcx_9 = *(arg1 + 0xc0)
                    rax_13 = (*(*rcx_9 + 0x3e8))(rcx_9)
            
            if ((rax_7 == 3 || rax_9 == 1) && (rax_11 == 3 || rax_13 == 1))
                void*** rax_39
                rax_39, rdx_10 = j_sub_140a82f30(0x30)
                
                if (rax_39 == 0)
                    return result
                
                int64_t* rcx_27 = *(arg1 + 0xc0)
                void*** rbp_1
                
                if (rcx_27 == 0)
                    rbp_1 = nullptr
                else
                    int64_t r8_5 = *rcx_27
                    void*** rax_40
                    rax_40, rdx_10 = (*(r8_5 + 0x3f8))(rcx_27, arg2, r8_5)
                    rbp_1 = rax_40
                
                int64_t* rcx_28 = *(arg1 + 0xb8)
                
                if (rcx_28 != 0)
                    void*** result_4
                    result_4, rdx_10 = (*(*rcx_28 + 0x3f8))(rcx_28, arg2)
                    result = result_4
                
                zmm1.o = *(arg1 + 0xb0)
                return sub_1417bf810(rax_39, rdx_10, result, rbp_1, zx.d(*(arg1 + 0xc8)))
            
            int64_t* rcx_10 = *(arg1 + 0xb8)
            int32_t rax_15 = (*(*rcx_10 + 0x3e8))(rcx_10)
            int32_t rax_17
            
            if (rax_15 == 3)
                int64_t* rcx_11 = *(arg1 + 0xc0)
                rax_17 = (*(*rcx_11 + 0x3e8))(rcx_11)
            
            void*** result_12
            void*** r14_1
            
            if (rax_15 == 3 && rax_17 == 4)
                void*** rax_18
                rax_18, rdx_3 = j_sub_140a82f30(zx.q(rax_17 + 0x34))
                r14_1 = rax_18
                
                if (rax_18 == 0)
                    return result
                
                int64_t* rcx_13 = *(arg1 + 0xc0)
                
                if (rcx_13 == 0)
                    result_12 = nullptr
                else
                    int64_t r8_2 = *rcx_13
                    void*** result_14
                    result_14, rdx_3 = (*(r8_2 + 0x3f8))(rcx_13, arg2, r8_2)
                    result_12 = result_14
                
                int64_t* rcx_14 = *(arg1 + 0xb8)
                
                if (rcx_14 != 0)
                    void*** result_2
                    result_2, rdx_3 = (*(*rcx_14 + 0x3f8))(rcx_14, arg2)
                    result = result_2
                
                result_9 = nullptr
                result_8 = result
                goto label_14277a224
            
            int64_t* rcx_16 = *(arg1 + 0xb8)
            int32_t rax_23 = (*(*rcx_16 + 0x3e8))(rcx_16)
            int32_t rax_25
            
            if (rax_23 == 4)
                int64_t* rcx_17 = *(arg1 + 0xc0)
                rax_25 = (*(*rcx_17 + 0x3e8))(rcx_17)
            
            if (rax_23 == 4 && rax_25 == 3)
                void*** rax_26
                rax_26, rdx_3 = j_sub_140a82f30(zx.q(rax_25 + 0x35))
                r14_1 = rax_26
                
                if (rax_26 == 0)
                    return result
                
                int64_t* rcx_19 = *(arg1 + 0xb8)
                void*** result_13
                
                if (rcx_19 == 0)
                    result_13 = nullptr
                else
                    int64_t r8_3 = *rcx_19
                    void*** result_15
                    result_15, rdx_3 = (*(r8_3 + 0x3f8))(rcx_19, arg2, r8_3)
                    result_13 = result_15
                
                int64_t* rcx_20 = *(arg1 + 0xc0)
                
                if (rcx_20 == 0)
                    result_8 = nullptr
                else
                    void*** result_10
                    result_10, rdx_3 = (*(*rcx_20 + 0x3f8))(rcx_20, arg2)
                    result_8 = result_10
                
                result_9 = result_13
                var_10_1 = zx.d(*(arg1 + 0xc8))
                result_1 = nullptr
                goto label_14277a22d
            
            int64_t* rcx_21 = *(arg1 + 0xb8)
            int32_t rax_30 = (*(*rcx_21 + 0x3e8))(rcx_21)
            int32_t rax_32
            
            if (rax_30 != 4)
                int64_t* rcx_22 = *(arg1 + 0xb8)
                rax_32 = (*(*rcx_22 + 0x3e8))(rcx_22)
            
            if (rax_30 == 4 || rax_32 == 1)
                int64_t* rcx_23 = *(arg1 + 0xc0)
                int32_t rax_34 = (*(*rcx_23 + 0x3e8))(rcx_23)
                int32_t rax_36
                
                if (rax_34 != 4)
                    int64_t* rcx_24 = *(arg1 + 0xb8)
                    rax_36 = (*(*rcx_24 + 0x3e8))(rcx_24)
                
                if (rax_34 == 4 || rax_36 == 1)
                    void*** rax_37
                    rax_37, rdx_3 = j_sub_140a82f30(0x38)
                    r14_1 = rax_37
                    
                    if (rax_37 == 0)
                        return result
                    
                    int64_t* rcx_25 = *(arg1 + 0xc0)
                    
                    if (rcx_25 == 0)
                        result_12 = nullptr
                    else
                        int64_t r8_4 = *rcx_25
                        void*** result_16
                        result_16, rdx_3 = (*(r8_4 + 0x3f8))(rcx_25, arg2, r8_4)
                        result_12 = result_16
                    
                    int64_t* rcx_26 = *(arg1 + 0xb8)
                    
                    if (rcx_26 != 0)
                        void*** result_3
                        result_3, rdx_3 = (*(*rcx_26 + 0x3f8))(rcx_26, arg2)
                        result = result_3
                    
                    result_9 = result
                    result_8 = nullptr
                label_14277a224:
                    var_10_1 = zx.d(*(arg1 + 0xc8))
                    result_1 = result_12
                label_14277a22d:
                    rcx_15 = r14_1
                label_14277a230:
                    zmm1.o = *(arg1 + 0xb0)
                    return sub_1417bf890(rcx_15, rdx_3, result_8, result_9, result_1, var_10_1)
    else if (rcx_5 != 0)
        int32_t rax_51 = (*(*rcx_5 + 0x3e8))(rcx_5, rdx_2)
        
        if (rax_51 == 3)
            void*** rax_52
            rax_52, rdx_10 = j_sub_140a82f30(zx.q(rax_51 + 0x2d))
            
            if (rax_52 == 0)
                return result
            
            int64_t* rcx_36 = *(arg1 + 0xc0)
            
            if (rcx_36 != 0)
                int64_t r8_9 = *rcx_36
                void*** result_6
                result_6, rdx_10 = (*(r8_9 + 0x3f8))(rcx_36, arg2, r8_9)
                result = result_6
            
            zmm1.o = *(arg1 + 0xb0)
            return sub_1417bf810(rax_52, rdx_10, nullptr, result, zx.d(*(arg1 + 0xc8)))
        
        int64_t* rcx_37 = *(arg1 + 0xc0)
        int32_t rax_54 = (*(*rcx_37 + 0x3e8))(rcx_37)
        
        if (rax_54 == 4)
            void*** rax_55
            rax_55, rdx_3 = j_sub_140a82f30(zx.q(rax_54 + 0x34))
            
            if (rax_55 == 0)
                return result
            
            int64_t* rcx_39 = *(arg1 + 0xc0)
            
            if (rcx_39 != 0)
                int64_t r8_10 = *rcx_39
                void*** result_7
                result_7, rdx_3 = (*(r8_10 + 0x3f8))(rcx_39, arg2, r8_10)
                result = result_7
            
            result_9 = nullptr
            var_10_1 = zx.d(*(arg1 + 0xc8))
            result_8 = nullptr
            result_1 = result
            rcx_15 = rax_55
            goto label_14277a230

return nullptr
