// 函数: sub_14292c5b0
// 地址: 0x14292c5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax = sx.q(*arg2)

if (rax.d u<= 8)
    void* r8_2 = &__dos_header.e_magic[zx.q(jump_table_14292c7f4[rax])]
    
    switch (r8_2)
        case 0x14292c5ea
            sub_1428b6f70(arg1, "othername:<unsupported>", r8_2)
        case 0x14292c609
            sub_1428b6f70(arg1, "X400Name:<unsupported>", r8_2)
        case 0x14292c628
            sub_1428b6f70(arg1, "EdiPartyName:<unsupported>", r8_2)
        case 0x14292c647
            sub_1428b6f70(arg1, "email:%s", *(*(arg2 + 8) + 8))
        case 0x14292c66e
            sub_1428b6f70(arg1, "DNS:%s", *(*(arg2 + 8) + 8))
        case 0x14292c695
            sub_1428b6f70(arg1, "URI:%s", *(*(arg2 + 8) + 8))
        case 0x14292c6bc
            sub_1428b6f70(arg1, "DirName:", r8_2)
            sub_1428f6c70(arg1, *(arg2 + 8), 0, 0x82031f)
        case 0x14292c6f0
            int32_t* rax_8 = *(arg2 + 8)
            int32_t rcx_8 = *rax_8
            void* rdi_1 = *(rax_8 + 8)
            
            if (rcx_8 == 4)
                *(rdi_1 + 1)
                uint32_t var_10 = zx.d(*(rdi_1 + 3))
                uint32_t var_18 = zx.d(*(rdi_1 + 2))
                sub_1428b6f70(arg1, "IP Address:%d.%d.%d.%d", zx.q(*rdi_1))
                return 1
            
            if (rcx_8 != 0x10)
                sub_1428b6f70(arg1, "IP Address:<invalid>", r8_2)
                return 1
            
            sub_1428b6f70(arg1, "IP Address", r8_2)
            int64_t i_1 = 8
            int64_t i
            
            do
                sub_1428b6f70(arg1, ":%X", zx.q(zx.d(*rdi_1) << 8) | zx.q(*(rdi_1 + 1)))
                rdi_1 += 2
                i = i_1
                i_1 -= 1
            while (i != 1)
            sub_14289a750(arg1, &data_14370209c)
        case 0x14292c7c8
            sub_1428b6f70(arg1, "Registered ID:", r8_2)
            sub_1428cdc60(arg1, *(arg2 + 8))

return 1
