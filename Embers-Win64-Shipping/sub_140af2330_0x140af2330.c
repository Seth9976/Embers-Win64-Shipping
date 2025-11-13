// 函数: sub_140af2330
// 地址: 0x140af2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = 0
int16_t* const rbx = &data_142d40450
bool r10 = false
int16_t* r11

if (arg3[1].d == 0)
    r11 = &data_142d40450
else
    r11 = *arg3

int16_t i_1 = *r11
int16_t* rax = r11

if (i_1 != 0)
    int16_t i
    
    do
        i = rax[1]
        
        if (i_1 == 0x22)
            if (r9 == 0)
                r10 = r10 == 0
            
            goto label_140af239b
        
        if (i_1 != 0x5c || r10 == 0 || r9 != 0)
        label_140af239b:
            r9 = 0
            bool cond:1_1
            
            if (i_1 == 0x20)
                if (rax != r11)
                    cond:1_1 = i == 0
                    goto label_140af23ac
                
            label_140af2433:
                int64_t var_18
                int64_t* rax_2 = sub_140a30480(arg3, &var_18, nullptr)
                
                if (rax_2[1].d != 0)
                    *rax_2
                
                if (arg2[1].d != 0)
                    rbx = *arg2
                
                sub_140a2e390(arg1, u"%s="%s"\r\n", rbx)
                int64_t rcx_2 = var_18
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                goto label_140af24ad
            
            bool cond:2_1
            
            if (i_1 != 0x22)
                if (i_1 == 0x5c)
                    goto label_140af23fe
                
                if ((0xfffd & (i_1 - 0x7b)) == 0 && r10 == 0)
                    goto label_140af2433
                
                if (i_1 != 0x2f || i != i_1)
                    goto label_140af23ae
                
                cond:2_1 = r10 == 0
                goto label_140af23b8
            
            cond:1_1 = rax == r11
        label_140af23ac:
            
            if (cond:1_1 || i == 0xd)
                goto label_140af2433
            
        label_140af23b4:
            cond:2_1 = i == 0xa
        label_140af23b8:
            
            if (cond:2_1)
                goto label_140af2433
        else
            r9 = 1
        label_140af23fe:
            
            if (i == 0)
                goto label_140af2433
            
            if (r9 == 0)
            label_140af23ae:
                
                if (i == 0xd)
                    goto label_140af2433
                
                goto label_140af23b4
        
        i_1 = i
        rax = &rax[1]
    while (i != 0)

if (arg3[1].d != 0)
    *arg3

if (arg2[1].d != 0)
    rbx = *arg2

sub_140a2e390(arg1, u"%s=%s\r\n", rbx)
label_140af24ad:
return arg1
