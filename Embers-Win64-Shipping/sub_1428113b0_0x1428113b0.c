// 函数: sub_1428113b0
// 地址: 0x1428113b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2.b & 0xf) != 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rbx = *arg2
int64_t r9 = sub_142816b70(arg1, rbx)
char* rax_2

if (rbx == 0x44424553)
    int32_t rbx_1 = arg2[1]
    sub_142816b70(arg1, rbx_1)
    int32_t r14_1 = arg2[2]
    sub_142816b70(arg1, r14_1)
    
    if (sub_1427f5760(rbx_1, r14_1) != 0)
        sub_142816b70(arg1, arg2[3])
        int32_t r14_2 = arg2[4]
        sub_142816b70(arg1, *(*(arg1 + 0x10) + 0x40))
        int32_t rcx_7 = *(*(arg1 + 8) + 0x40)
        
        if (r14_2 == rcx_7)
            bool cond:0_1 = arg2[5] != 0
            int32_t arg_18 = arg3 - 0x18
            void* rax_5
            rax_5.b = cond:0_1
            *(arg1 + 0x152) = rax_5.b
            sub_142816b70(arg1, 1)
            int32_t arg_10
            rax_2 = sub_142813410(arg1, &arg2[6], &arg_18, &arg_10)
            
            if (rax_2 == 0)
                rax_2.b = 0
            else
                rax_2 = sub_1428126a0(arg1, rax_2, arg_18, arg_10)
                *(arg1 + 0x152) = 0
        else
            int32_t var_228
            var_228.q = sub_1427f5720(rcx_7)
            sub_142817350(arg1, 4, 
                "PxBinaryConverter: Mismatch of platform tags of binary data and metadata:\n Binary "
            "Data: %s\n MetaData: %s\n", 
                sub_1427f5720(r14_2))
            rax_2.b = 0
    else
        char var_218[0x200]
        sub_1427f57a0(&var_218, 0x200)
        char (* var_220_1)[0x200] = &var_218
        int32_t var_228_1 = r14_1
        sub_142817350(arg1, 4, 
            "PxBinaryConverter: Buffer contains data version (%x-%d) is incompatible with this PhysX "
        "sdk.\n These versions would be compatible: %s", 
            zx.q(rbx_1))
        rax_2.b = 0
else
    sub_142817350(arg1, 4, 
        "PxBinaryConverter: Buffer contains data with bad header indicating invalid serialized data.", 
        r9)
    rax_2.b = 0

return rax_2
