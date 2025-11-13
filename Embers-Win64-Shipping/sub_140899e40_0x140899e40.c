// 函数: sub_140899e40
// 地址: 0x140899e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int16_t r10 = arg1[1].w
int32_t i_1 = 0
data_143ceabb0 = 0
int32_t r14 = 0
int32_t i_2

for (int32_t i = 0; i s< 0xa; )
    i_2 = i
    
    if (*(&data_14397fe00 + sx.q(i) * 0x14) == r10)
        break
    
    i += 1
    data_143ceabb0 = i
    i_2 = i

data_143ceabb4 = 0
int16_t rbx

if (i_2 == 0xa)
    rbx = 0
else
    data_143ceabb4 = 1
    rbx = *(&data_14397fe00 + sx.q(i_2) * 0x14)

void* rsi = nullptr

if (arg2 == 0)
    goto label_140899f33

int32_t var_50_1 = 0
int64_t var_68
int64_t* rdx = &var_68
var_68 = arg2

if (arg3 == 0)
    data_143cea670(sub_14089a2e0, rdx)
else
    data_143cea678(sub_14089a2e0, rdx)

int64_t result

if (var_50_1 != 0)
    void var_60
    rsi = &var_60
label_140899f33:
    int64_t rax_4 = malloc(0x28)
    *(arg1 + 0xf8) = rax_4
    
    if (rax_4 != 0)
        __builtin_memset(rax_4, 0, 0x28)
        int32_t rax_5 = data_143cea668(rsi, *(arg1 + 0xf8), 0)
        
        if (rax_5 == 0)
            int32_t r9 = data_143ceabb0
            int32_t r8 = data_143ceabb4
            
            do
                if (rbx == 0)
                    sub_140899bd0(arg1)
                    
                    if (r14 == 0)
                        goto label_14089a05f
                    
                    result = 0xffffffff
                    goto label_14089a074
                
                uint32_t rax_6 = zx.d(rbx)
                
                if (rax_6 == 8 || rax_6 == 0x8010 || rax_6 == 0x8020 || rax_6 == 0x8120)
                    arg1[1].w = rbx
                    r14 = 1
                    int32_t rax_10 = sub_140899990(arg1, nullptr)
                    r9 = data_143ceabb0
                    r8 = data_143ceabb4
                    *(*(arg1 + 0xf8) + 0x10) = rax_10
                    
                    if (*(*(arg1 + 0xf8) + 0x10) s> 0)
                        i_1 = 1
                
                if (r9 == 0xa || r8 == 0xa)
                    rbx = 0
                else
                    int64_t rax_13 = sx.q(r8)
                    r8 += 1
                    data_143ceabb4 = r8
                    rbx = *(&data_14397fe00 + ((rax_13 + sx.q(r9) * 0xa) << 1))
            while (i_1 == 0)
            
            *(*(arg1 + 0xf8) + 0x14) = arg1[3]
            result = 0
        else
            sub_140899bd0(arg1)
            result = sub_14089b0c0("DirectSoundCreate", rax_5)
    else
        result = 1
else
label_14089a05f:
    result = sub_14089b010()

label_14089a074:
__security_check_cookie(rax_1 ^ &var_88)
return result
