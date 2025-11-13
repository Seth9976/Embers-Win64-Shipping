// 函数: sub_140e56330
// 地址: 0x140e56330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8

if (*(arg2 + 0x20) != 0)
    if (*(arg2 + 0x248) s> 0)
        void var_170
        sub_140dbf000(arg2 + 0x240, &var_170, 1, 0, arg3, data_1439ae51c)
        void var_168
        
        if (sub_140db3500(&var_170) == 0)
            sub_140e8cde0(arg2)
        else
            void* rdx_1 = &var_168
            int64_t var_17c_1 = 0
            void* var_48
            
            if (var_48 != 0)
                rdx_1 = var_48
            
            int32_t var_40
            int64_t rcx_2 = sx.q(var_40) * 9
            float zmm3_1 = *(rdx_1 + (rcx_2 << 3) - 0x40)
            float zmm2_1 = zmm3_1 f* *(rdx_1 + (rcx_2 << 3) - 0x44)
            zmm3_1 = zmm3_1 f* *(rdx_1 + (rcx_2 << 3) - 0x48)
            int32_t zmm1_1 = *(rdx_1 + (rcx_2 << 3) - 0x38)
            float var_174_1 = zmm2_1
            int32_t var_188 = *(rdx_1 + (rcx_2 << 3) - 0x3c)
            int32_t var_184_1 = zmm1_1
            float var_180_1 = zmm3_1
            float var_198
            sub_140dbe170(&var_188, &var_198)
            float var_194
            float var_190
            float var_18c
            
            if (var_198 f!= *(arg2 + 0x260) || var_194 f!= *(arg2 + 0x264)
                    || var_190 f!= *(arg2 + 0x268) || not(var_18c f== *(arg2 + 0x26c)))
                sub_140e6d620(arg2, &var_170)
        
        void var_20
        sub_140596d80(&var_20)
        int64_t* var_28
        
        if (var_28 != 0)
            var_28[1].d -= 1
            
            if (var_28[1].d == 1)
                (**var_28)(var_28)
                int32_t temp1_1 = *(var_28 + 0xc)
                *(var_28 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_28 + 8))(var_28, 1)
        
        sub_140d94d20(&var_168)
    
    if (*(arg2 + 0x138) - *(arg2 + 0x164) s> 0 || *(arg2 + 0x31) != 0)
        sub_140e81a30(arg2)

int64_t* result = sub_140e8d440(arg2, *arg1 + 0x1d0, 0)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
