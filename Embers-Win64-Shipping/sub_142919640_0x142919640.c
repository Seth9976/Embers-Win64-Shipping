// 函数: sub_142919640
// 地址: 0x142919640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x220)
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142890560(arg2) + 7)
int32_t rdi = 0
char* rax_6 = sub_1428a6730(zx.q((((temp0 & 7) + temp1) s>> 3) + 8))
void var_138

if (rax_6 != 0)
    int32_t count = arg3[1].d << 3
    
    if (count u<= 0x60)
        uint64_t count_2 = zx.q(count)
        memcpy(&var_138, *arg3, count)
        memset(&var_138 + count_2, 0, 0x60 - count_2)
        int32_t i_1 = 0
        
        if (((temp0 & 7) + temp1) s>> 3 != 0xfffffff8)
            int32_t i
            
            do
                void var_d8
                
                if (sub_142897c20(&var_d8, 0x40) != 1)
                    goto label_142919852
                
                void var_218
                sub_1428c98a0(&var_218)
                sub_1428c9950(&var_218, &i_1, 4)
                sub_1428c9950(&var_218, &var_138, 0x60)
                sub_1428c9950(&var_218, arg4, arg5)
                sub_1428c9950(&var_218, &var_d8, 0x40)
                uint8_t var_98[0x40]
                sub_1428c90a0(&var_98, &var_218)
                uint64_t i_2 = zx.q(i_1)
                uint32_t count_1 = (((temp0 & 7) + temp1) s>> 3) + 8 - i_2.d
                
                if (count_1 u> 0x40)
                    count_1 = 0x40
                
                memcpy(&rax_6[i_2], &var_98, count_1)
                i = i_1 + count_1
                i_1 = i
            while (i u< (((temp0 & 7) + temp1) s>> 3) + 8)
        
        if (sub_14288fa60(rax_6, (((temp0 & 7) + temp1) s>> 3) + 8, arg1) != 0)
            int32_t var_238
            var_238.q = arg6
            
            if (sub_14291a950(nullptr, arg1, arg1, arg2, var_238) == 1)
                rdi = 1
    else
        sub_1428a5670(3, 0x8c, 0x75, "crypto\bn\bn_rand.c", 0xeb)

label_142919852:
sub_1428a6780(rax_6)
sub_1428b8960(&var_138, 0x60)
__security_check_cookie(rax_1 ^ &var_258)
return zx.q(rdi)
