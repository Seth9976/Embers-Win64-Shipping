// 函数: sub_1403cbd00
// 地址: 0x1403cbd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
void* r9 = arg2 + r10
char* result
result.b = *(arg1 + 0x12)
char* r11_1

if (result.b == 4)
    result.b = *(arg1 + 0x11)
    
    if (result.b == 0x10)
        r11_1 = &arg2[6]
        int64_t rsi_21 = 6
        
        if (arg3 != 0)
            rsi_21 = 0
        
        if (arg3 != 0)
            r11_1 = arg2
        
        result = 8
        int64_t rdi_3 = 2
        
        if (arg3 == 0)
            rdi_3 = 8
        
        arg3.b = 0x30
        
        if (rdi_3 s< r10)
            result = &arg2[rdi_3]
            void* rbx_36 = &arg2[rdi_3 + 8]
            
            if (rbx_36 u<= r9)
                rbx_36 = r9
            
            void* r10_12 = not.q(arg2) - rdi_3 + rbx_36
            
            if ((r10_12.b & 8) == 0)
                rbx_36.b = *result
                arg2[rsi_21] = rbx_36.b
                rbx_36.b = result[1]
                r11_1[1] = rbx_36.b
                rbx_36.b = result[2]
                r11_1[2] = rbx_36.b
                rbx_36.b = result[3]
                r11_1[3] = rbx_36.b
                rbx_36.b = result[4]
                r11_1[4] = rbx_36.b
                rbx_36.b = result[5]
                r11_1[5] = rbx_36.b
                r11_1 = &r11_1[6]
                result = &result[8]
            
            if (r10_12 u>= 8)
                do
                    *r11_1 = *result
                    r11_1[1] = result[1]
                    r11_1[2] = result[2]
                    r11_1[3] = result[3]
                    r11_1[4] = result[4]
                    r11_1[5] = result[5]
                    r11_1[6] = result[8]
                    r11_1[7] = result[9]
                    r11_1[8] = result[0xa]
                    r11_1[9] = result[0xb]
                    r11_1[0xa] = result[0xc]
                    r11_1[0xb] = result[0xd]
                    r11_1 = &r11_1[0xc]
                    result = &result[0x10]
                while (result u< r9)
        
    label_1403cc0cb:
        *(arg1 + 0x13) = arg3.b
        *(arg1 + 0x12) = 3
        
        if (*(arg1 + 0x10) == 6)
            *(arg1 + 0x10) = 2
        
        *(arg1 + 8) = r11_1 - arg2
    else if (result.b == 8)
        r11_1 = &arg2[3]
        
        if (arg3 != 0)
            r11_1 = arg2
        
        result.b = arg3 == 0
        void* rsi_9 = result * 3 + 1
        arg3.b = 0x18
        
        if (rsi_9 s< r10)
            void* rdi_2 = arg2 + rsi_9 + 4
            
            if (rdi_2 u<= r9)
                rdi_2 = r9
            
            result = arg2 + rsi_9
            void* r10_6 = not.q(arg2) - rsi_9 + rdi_2
            int64_t rsi_13 = zx.q((r10_6.d u>> 2) + 1) & 3
            
            if (rsi_13 != 0)
                int64_t i_4 = neg.q(rsi_13)
                int64_t i
                
                do
                    *r11_1 = *result
                    r11_1[1] = result[1]
                    r11_1[2] = result[2]
                    r11_1 = &r11_1[3]
                    result = &result[4]
                    i = i_4
                    i_4 += 1
                while (i != -1)
            
            if (r10_6 u>= 0xc)
                do
                    *r11_1 = *result
                    r11_1[1] = result[1]
                    r11_1[2] = result[2]
                    r11_1[3] = result[4]
                    r11_1[4] = result[5]
                    r11_1[5] = result[6]
                    r11_1[6] = result[8]
                    r11_1[7] = result[9]
                    r11_1[8] = result[0xa]
                    r11_1[9] = result[0xc]
                    r11_1[0xa] = result[0xd]
                    r11_1[0xb] = result[0xe]
                    r11_1 = &r11_1[0xc]
                    result = &result[0x10]
                while (result u< r9)
        
        goto label_1403cc0cb
else if (result.b == 2)
    result.b = *(arg1 + 0x11)
    
    if (result.b == 0x10)
        result = &arg2[4]
        r11_1 = arg2
        
        if (arg3 == 0)
            r11_1 = &arg2[2]
        
        if (arg3 != 0)
            result = &arg2[2]
        
        arg3.b = 0x10
        
        if (result u< r9)
            int64_t r10_8 = r10 + not.q(result) + arg2
            int64_t rsi_20 = zx.q((r10_8.d u>> 2) + 1) & 3
            
            if (rsi_20 != 0)
                int64_t i_5 = neg.q(rsi_20)
                int64_t i_1
                
                do
                    *r11_1 = *result
                    r11_1[1] = result[1]
                    r11_1 = &r11_1[2]
                    result = &result[4]
                    i_1 = i_5
                    i_5 += 1
                while (i_1 != -1)
            
            if (r10_8 u>= 0xc)
                do
                    *r11_1 = *result
                    r11_1[1] = result[1]
                    r11_1[2] = result[4]
                    r11_1[3] = result[5]
                    r11_1[4] = result[8]
                    r11_1[5] = result[9]
                    r11_1[6] = result[0xc]
                    r11_1[7] = result[0xd]
                    r11_1 = &r11_1[8]
                    result = &result[0x10]
                while (result u< r9)
        
    label_1403cbfab:
        *(arg1 + 0x13) = arg3.b
        *(arg1 + 0x12) = 1
        
        if (*(arg1 + 0x10) == 4)
            *(arg1 + 0x10) = 0
        
        *(arg1 + 8) = r11_1 - arg2
    else if (result.b == 8)
        result = &arg2[2]
        r11_1 = arg2
        
        if (arg3 == 0)
            r11_1 = &arg2[1]
        
        if (arg3 != 0)
            result = &arg2[1]
        
        arg3.b = 8
        
        if (result u< r9)
            void* r10_2 = r10 + not.q(result) + arg2
            int64_t rsi_7 = zx.q((r10_2.d u>> 1) + 1) & 7
            
            if (rsi_7 != 0)
                int64_t i_3 = neg.q(rsi_7)
                int64_t i_2
                
                do
                    *r11_1 = *result
                    r11_1 = &r11_1[1]
                    result = &result[2]
                    i_2 = i_3
                    i_3 += 1
                while (i_2 != -1)
            
            if (r10_2 u>= 0xe)
                do
                    *r11_1 = *result
                    r11_1[1] = result[2]
                    r11_1[2] = result[4]
                    r11_1[3] = result[6]
                    r11_1[4] = result[8]
                    r11_1[5] = result[0xa]
                    r11_1[6] = result[0xc]
                    r11_1[7] = result[0xe]
                    r11_1 = &r11_1[8]
                    result = &result[0x10]
                while (result u< r9)
        
        goto label_1403cbfab
return result
