// 函数: sub_141f7fb70
// 地址: 0x141f7fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = data_143f5a130
int32_t rcx = *result
int64_t rsi
rsi.b = rcx != 0
int16_t* var_38
int32_t i_8

if (data_143f0f1f6 == 0 && rcx != 0)
    int64_t* rbx_1 = data_143f5a128
    rsi.b = 0
    sub_140a2e390(&var_38, u"%d", 0)
    int16_t* const rdx = &data_142d40450
    
    if (i_8 != 0)
        rdx = var_38
    
    result = (*(*rbx_1 + 0x80))(rbx_1, rdx, 0x8000000)
    int16_t* rcx_3 = var_38
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)

void* rcx_4 = *(arg1 + 0x30)
int16_t* rcx_17

if (rsi.b == 0)
    if (rcx_4 != 0)
        sub_142385480(rcx_4, zx.o(0))
        sub_141f97a70(arg1, *(arg1 + 0x30))
        void*** rbx_3 = *(arg1 + 0x30)
        
        if (rbx_3 != 0)
            sub_142381600(rbx_3)
            j_sub_140a74f90(rbx_3)
        
        int32_t var_28_4 = 0xffffffff
        *(arg1 + 0x30) = 0
        var_38 = nullptr
        i_8.q = 0
        sub_140d3cc80(sub_1425b3af0(), &var_38, 1, 0x10, 0)
        int32_t i_28 = i_8
        int32_t i = var_28_4 + 1
        int16_t* rcx_23 = var_38
        int32_t i_12 = i
        
        if (i s< i_28)
            while (*(rcx_23 + (sx.q(i) << 3)) == 0)
                int32_t i_20 = i + 1
                i_12 = i_20
                i = i_20
                
                if (i_20 s>= i_28)
                    break
        
        while (i s>= 0)
            if (i s>= i_28)
                break
            
            int64_t* r9_4 = *(rcx_23 + (sx.q(i) << 3))
            
            if ((*(r9_4 + 0x3d) & 8) != 0)
                (*(*r9_4 + 0x2f8))(r9_4)
                i = i_12
                i_28 = i_8
                rcx_23 = var_38
            
            int32_t i_21 = i + 1
            i_12 = i_21
            i = i_21
            
            if (i_21 s< i_28)
                while (*(rcx_23 + (sx.q(i) << 3)) == 0)
                    int32_t i_22 = i + 1
                    i_12 = i_22
                    i = i_22
                    
                    if (i_22 s>= i_28)
                        break
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        var_38 = nullptr
        i_8.q = 0
        int32_t var_28_5 = 0xffffffff
        sub_140d3cc80(sub_1425aaa30(), &var_38, 1, 0x10, 0)
        int32_t i_29 = i_8
        int32_t i_1 = var_28_5 + 1
        int16_t* rcx_26 = var_38
        int32_t i_13 = i_1
        
        if (i_1 s< i_29)
            while (*(rcx_26 + (sx.q(i_1) << 3)) == 0)
                int32_t i_23 = i_1 + 1
                i_13 = i_23
                i_1 = i_23
                
                if (i_23 s>= i_29)
                    break
        
        while (i_1 s>= 0)
            if (i_1 s>= i_29)
                break
            
            int64_t* r9_5 = *(rcx_26 + (sx.q(i_1) << 3))
            
            if ((*(r9_5 + 0x3d) & 8) != 0)
                sub_14236c030(r9_5)
                i_1 = i_13
                i_29 = i_8
                rcx_26 = var_38
            
            int32_t i_24 = i_1 + 1
            i_13 = i_24
            i_1 = i_24
            
            if (i_24 s< i_29)
                while (*(rcx_26 + (sx.q(i_1) << 3)) == 0)
                    int32_t i_25 = i_1 + 1
                    i_13 = i_25
                    i_1 = i_25
                    
                    if (i_25 s>= i_29)
                        break
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        var_38 = nullptr
        i_8.q = 0
        int32_t var_28_6 = 0xffffffff
        result = sub_140d3cc80(sub_14258cb80(), &var_38, 1, 0x10, 0)
        int32_t i_2 = i_8
        int32_t i_3 = var_28_6 + 1
        rcx_17 = var_38
        int32_t i_14 = i_3
        
        if (i_3 s< i_2)
            do
                result = sx.q(i_3)
                
                if (*(rcx_17 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_3 + 1)
                i_14 = result.d
                i_3 = result.d
            while (result.d s< i_2)
        
        while (i_3 s>= 0)
            if (i_3 s>= i_2)
                break
            
            int64_t* r9_6 = *(rcx_17 + (sx.q(i_3) << 3))
            
            if ((*(r9_6 + 0x3d) & 8) != 0)
                sub_142319530(r9_6)
                i_3 = i_14
                i_2 = i_8
                rcx_17 = var_38
            
            result = zx.q(i_3 + 1)
            i_14 = result.d
            i_3 = result.d
            
            if (result.d s< i_2)
                do
                    result = sx.q(i_3)
                    
                    if (*(rcx_17 + (result << 3)) != 0)
                        break
                    
                    result = zx.q(i_3 + 1)
                    i_14 = result.d
                    i_3 = result.d
                while (result.d s< i_2)
        
    label_141f80108:
        
        if (rcx_17 != 0)
            return sub_140a74f90(rcx_17)
else if (rcx_4 == 0)
    sub_140af3b00(data_143ddb400, TextureStreaming", LoadMapTimeLimit", arg1 + 0x28, 
        &data_143de5780)
    void*** rax_1 = j_sub_140a82f30(0x5a8)
    void*** rbx_2
    
    if (rax_1 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_14237e8a0(rax_1)
    
    *(arg1 + 0x30) = rbx_2
    int64_t rsi_1 = sx.q(*(arg1 + 0x18))
    int32_t rax_3 = (rsi_1 + 1).d
    *(arg1 + 0x18) = rax_3
    
    if (rax_3 s> *(arg1 + 0x1c))
        sub_1405a4d70(arg1 + 0x10)
    
    result = *(arg1 + 0x10)
    *(result + (rsi_1 << 3)) = rbx_2
    
    if (arg2 == 0)
        var_38 = nullptr
        i_8.q = 0
        int32_t var_28_1 = 0xffffffff
        sub_140d3cc80(sub_1425b3af0(), &var_38, 1, 0x10, 0)
        int32_t i_26 = i_8
        int32_t i_4 = var_28_1 + 1
        int16_t* rdx_3 = var_38
        int32_t i_9 = i_4
        
        if (i_4 s< i_26)
            while (*(rdx_3 + (sx.q(i_4) << 3)) == 0)
                int32_t i_15 = i_4 + 1
                i_9 = i_15
                i_4 = i_15
                
                if (i_15 s>= i_26)
                    break
        
        while (i_4 s>= 0)
            if (i_4 s>= i_26)
                break
            
            int64_t* rcx_10 = *(rdx_3 + (sx.q(i_4) << 3))
            (*(*rcx_10 + 0x2f8))(rcx_10)
            i_26 = i_8
            i_4 = i_9 + 1
            rdx_3 = var_38
            i_9 = i_4
            
            if (i_4 s< i_26)
                while (*(rdx_3 + (sx.q(i_4) << 3)) == 0)
                    int32_t i_16 = i_4 + 1
                    i_9 = i_16
                    i_4 = i_16
                    
                    if (i_16 s>= i_26)
                        break
        
        if (rdx_3 != 0)
            sub_140a74f90(rdx_3)
        
        var_38 = nullptr
        i_8.q = 0
        int32_t var_28_2 = 0xffffffff
        sub_140d3cc80(sub_1425aaa30(), &var_38, 1, 0x10, 0)
        int32_t i_27 = i_8
        int32_t i_5 = var_28_2 + 1
        int16_t* rcx_14 = var_38
        int32_t i_10 = i_5
        
        if (i_5 s< i_27)
            while (*(rcx_14 + (sx.q(i_5) << 3)) == 0)
                int32_t i_17 = i_5 + 1
                i_10 = i_17
                i_5 = i_17
                
                if (i_17 s>= i_27)
                    break
        
        while (i_5 s>= 0)
            if (i_5 s>= i_27)
                break
            
            int64_t* r9_2 = *(rcx_14 + (sx.q(i_5) << 3))
            
            if ((*(r9_2 + 0x3d) & 8) != 0)
                sub_14236c030(r9_2)
                i_5 = i_10
                i_27 = i_8
                rcx_14 = var_38
            
            int32_t i_18 = i_5 + 1
            i_10 = i_18
            i_5 = i_18
            
            if (i_18 s< i_27)
                while (*(rcx_14 + (sx.q(i_5) << 3)) == 0)
                    int32_t i_19 = i_5 + 1
                    i_10 = i_19
                    i_5 = i_19
                    
                    if (i_19 s>= i_27)
                        break
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        var_38 = nullptr
        i_8.q = 0
        int32_t var_28_3 = 0xffffffff
        result = sub_140d3cc80(sub_14258cb80(), &var_38, 1, 0x10, 0)
        int32_t i_6 = i_8
        int32_t i_7 = var_28_3 + 1
        rcx_17 = var_38
        int32_t i_11 = i_7
        
        if (i_7 s< i_6)
            do
                result = sx.q(i_7)
                
                if (*(rcx_17 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_7 + 1)
                i_11 = result.d
                i_7 = result.d
            while (result.d s< i_6)
        
        while (i_7 s>= 0)
            if (i_7 s>= i_6)
                break
            
            int64_t* r9_3 = *(rcx_17 + (sx.q(i_7) << 3))
            
            if ((*(r9_3 + 0x3d) & 8) != 0)
                sub_142319530(r9_3)
                i_7 = i_11
                i_6 = i_8
                rcx_17 = var_38
            
            result = zx.q(i_7 + 1)
            i_11 = result.d
            i_7 = result.d
            
            if (result.d s< i_6)
                do
                    result = sx.q(i_7)
                    
                    if (*(rcx_17 + (result << 3)) != 0)
                        break
                    
                    result = zx.q(i_7 + 1)
                    i_11 = result.d
                    i_7 = result.d
                while (result.d s< i_6)
        
        goto label_141f80108
return result
