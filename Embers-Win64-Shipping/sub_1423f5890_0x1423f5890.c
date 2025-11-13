// 函数: sub_1423f5890
// 地址: 0x1423f5890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_c8 = 0
int32_t i_2 = 0
int32_t var_b8 = 0xffffffff
void* result = sub_140d3cc80(sub_1425be5e0(), &var_c8, 1, 0x10, 0)
int32_t i = i_2
int32_t i_1 = var_b8 + 1
int64_t r11 = var_c8
int32_t i_3 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(r11 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    uint64_t rbx_1 = *(r11 + (sx.q(i_1) << 3))
    char rax_4 = *(rbx_1 + 0x11a)
    
    if (rax_4 != 7 && rax_4 != 4)
        int64_t* rax_5 = *(arg1 + 0xc38)
        int64_t* rcx_1 = rax_5
        void* rdx_2 = &rax_5[sx.q(*(arg1 + 0xc40))]
        
        if (rax_5 != rdx_2)
            do
                if (*(*rcx_1 + 0x278) == rbx_1)
                    goto label_1423f5a71
                
                rcx_1 = &rcx_1[1]
            while (rcx_1 != rdx_2)
        
        void* r8_2 = *(rbx_1 + 0x30)
        
        if (r8_2 != 0 && rax_5 != rdx_2)
            do
                if (*(*rax_5 + 0x278) == *(r8_2 + 0xb8))
                    goto label_1423f5a71
                
                rax_5 = &rax_5[1]
            while (rax_5 != rdx_2)
        
        if (sub_1423e68b0(arg1, rbx_1) == 0)
            void var_88
            sub_140cf0770(&var_88, rbx_1, 0x10002)
            int64_t var_a0
            int64_t* rax_7 = sub_140d04b60(&var_88, &var_a0)
            int16_t* const rdi_1
            
            if (rax_7[1].d == 0)
                rdi_1 = &data_142d40450
            else
                rdi_1 = *rax_7
            
            int64_t var_b0
            int64_t* rax_8 = sub_140d21e10(rbx_1, &var_b0, 0)
            int16_t* const r9_1
            
            if (rax_8[1].d == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *rax_8
            
            int32_t var_d8
            var_d8.q = rdi_1
            sub_140af98a0("Unknown", 0x34f8, 
                Previously active world %s not cleaned up by garbage collection! Referenced by:\r\n%s", 
                r9_1)
            int64_t rcx_7 = var_b0
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = var_a0
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            sub_140afbb40()
            sub_140cf0ae0(&var_88)
        
        r11 = var_c8
        i = i_2
        i_1 = i_3
    
label_1423f5a71:
    result = zx.q(i_1 + 1)
    i_3 = result.d
    i_1 = result.d
    
    if (result.d s< i)
        do
            result = sx.q(i_1)
            
            if (*(r11 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)

if (r11 != 0)
    result = sub_140a74f90(r11)

__security_check_cookie(rax_1 ^ &var_f8)
return result
