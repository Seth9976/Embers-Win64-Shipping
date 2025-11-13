// 函数: sub_142b57c90
// 地址: 0x142b57c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 == arg2)
    result.b = 1
    return result

int32_t rsi = *(arg1 + 0x10)

if (rsi == *(arg2 + 0x10) && *(arg1 + 0x20) == *(arg2 + 0x20) && *(arg1 + 0x30) == *(arg2 + 0x30)
        && *(arg1 + 0x40) == *(arg2 + 0x40) && *(arg1 + 0x50) == *(arg2 + 0x50)
        && *(arg1 + 0x60) == *(arg2 + 0x60) && *(arg1 + 0x70) == *(arg2 + 0x70)
        && *(arg1 + 0x80) == *(arg2 + 0x80) && *(arg1 + 0x90) == *(arg2 + 0x90)
        && *(arg1 + 0xa0) == *(arg2 + 0xa0) && *(arg1 + 0xb0) == *(arg2 + 0xb0)
        && *(arg1 + 0xc0) == *(arg2 + 0xc0) && *(arg1 + 0xd0) == *(arg2 + 0xd0)
        && *(arg1 + 0xe0) == *(arg2 + 0xe0) && *(arg1 + 0xf0) == *(arg2 + 0xf0)
        && *(arg1 + 0x100) == *(arg2 + 0x100) && *(arg1 + 0x110) == *(arg2 + 0x110)
        && *(arg1 + 0x120) == *(arg2 + 0x120) && *(arg1 + 0x130) == *(arg2 + 0x130)
        && *(arg1 + 0x180) == *(arg2 + 0x180) && *(arg1 + 0x190) == *(arg2 + 0x190)
        && *(arg1 + 0x1a0) == *(arg2 + 0x1a0) && *(arg1 + 0x1b0) == *(arg2 + 0x1b0)
        && *(arg1 + 0x1c0) == *(arg2 + 0x1c0) && *(arg1 + 0x1d0) == *(arg2 + 0x1d0)
        && *(arg1 + 0x1e0) == *(arg2 + 0x1e0) && *(arg1 + 0x348) == *(arg2 + 0x348)
        && *(arg1 + 0x358) == *(arg2 + 0x358) && *(arg1 + 0x368) == *(arg2 + 0x368)
        && *(arg1 + 0x378) == *(arg2 + 0x378) && *(arg1 + 0x388) == *(arg2 + 0x388)
        && *(arg1 + 0x398) == *(arg2 + 0x398) && memcmp(arg1 + 0x320, arg2 + 0x320, 0x1c).d == 0
        && sub_142b58550(*(arg1 + 8), *(arg2 + 8), rsi).b != 0
        && sub_142b58550(*(arg1 + 0x18), *(arg2 + 0x18), *(arg1 + 0x20)).b != 0
        && sub_142b58550(*(arg1 + 0x28), *(arg2 + 0x28), *(arg1 + 0x30)).b != 0
        && sub_142b58550(*(arg1 + 0x38), *(arg2 + 0x38), *(arg1 + 0x40)).b != 0
        && sub_142b58550(*(arg1 + 0x48), *(arg2 + 0x48), *(arg1 + 0x50)).b != 0
        && sub_142b58550(*(arg1 + 0x58), *(arg2 + 0x58), *(arg1 + 0x60)).b != 0
        && sub_142b58550(*(arg1 + 0x68), *(arg2 + 0x68), *(arg1 + 0x70)).b != 0
        && sub_142b58550(*(arg1 + 0x78), *(arg2 + 0x78), *(arg1 + 0x80)).b != 0
        && sub_142b58550(*(arg1 + 0x88), *(arg2 + 0x88), *(arg1 + 0x90)).b != 0
        && sub_142b58550(*(arg1 + 0x98), *(arg2 + 0x98), *(arg1 + 0xa0)).b != 0
        && sub_142b58550(*(arg1 + 0xa8), *(arg2 + 0xa8), *(arg1 + 0xb0)).b != 0
        && sub_142b58550(*(arg1 + 0xb8), *(arg2 + 0xb8), *(arg1 + 0xc0)).b != 0
        && sub_142b58550(*(arg1 + 0xc8), *(arg2 + 0xc8), *(arg1 + 0xd0)).b != 0
        && sub_142b58550(*(arg1 + 0xd8), *(arg2 + 0xd8), *(arg1 + 0xe0)).b != 0
        && sub_142b58550(*(arg1 + 0xe8), *(arg2 + 0xe8), *(arg1 + 0xf0)).b != 0
        && sub_142b58550(*(arg1 + 0xf8), *(arg2 + 0xf8), *(arg1 + 0x100)).b != 0
        && sub_142b58550(*(arg1 + 0x108), *(arg2 + 0x108), *(arg1 + 0x110)).b != 0
        && sub_142b58550(*(arg1 + 0x118), *(arg2 + 0x118), *(arg1 + 0x120)).b != 0
        && sub_142b58550(*(arg1 + 0x128), *(arg2 + 0x128), *(arg1 + 0x130)).b != 0
        && sub_142a48110(arg1 + 0x138, arg2 + 0x138).b != 0
        && sub_142b58550(*(arg1 + 0x178), *(arg2 + 0x178), *(arg1 + 0x180)).b != 0
        && sub_142b58550(*(arg1 + 0x188), *(arg2 + 0x188), *(arg1 + 0x190)).b != 0
        && sub_142b58550(*(arg1 + 0x198), *(arg2 + 0x198), *(arg1 + 0x1a0)).b != 0
        && sub_142b58550(*(arg1 + 0x1a8), *(arg2 + 0x1a8), *(arg1 + 0x1b0)).b != 0
        && sub_142b58550(*(arg1 + 0x1b8), *(arg2 + 0x1b8), *(arg1 + 0x1c0)).b != 0
        && sub_142b58550(*(arg1 + 0x1c8), *(arg2 + 0x1c8), *(arg1 + 0x1d0)).b != 0
        && sub_142b58550(*(arg1 + 0x1d8), *(arg2 + 0x1d8), *(arg1 + 0x1e0)).b != 0
        && sub_142b58550(*(arg1 + 0x340), *(arg2 + 0x340), *(arg1 + 0x348)).b != 0
        && sub_142b58550(*(arg1 + 0x350), *(arg2 + 0x350), *(arg1 + 0x358)).b != 0
        && sub_142b58550(*(arg1 + 0x360), *(arg2 + 0x360), *(arg1 + 0x368)).b != 0
        && sub_142b58550(*(arg1 + 0x370), *(arg2 + 0x370), *(arg1 + 0x378)).b != 0
        && sub_142b58550(*(arg1 + 0x380), *(arg2 + 0x380), *(arg1 + 0x388)).b != 0
        && sub_142b58550(*(arg1 + 0x390), *(arg2 + 0x390), *(arg1 + 0x388)).b != 0)
    result = *(arg1 + 0x1e8)
    
    if (result != 0)
    label_142b5834a:
        
        if (*(arg2 + 0x1e8) != 0)
            int32_t rcx_35 = *(arg1 + 0x1f8)
            
            if (rcx_35 == *(arg2 + 0x1f8) && *(arg1 + 0x1fc) == *(arg2 + 0x1fc))
                result.b = 1
                int32_t rbp = 0
                
                if (rcx_35 s> 0)
                    int64_t rsi_1 = 0
                    
                    while (result.b != 0)
                        result = sub_142b58550(*(*(arg1 + 0x1e8) + rsi_1), 
                            *(*(arg2 + 0x1e8) + rsi_1), *(arg1 + 0x1fc))
                        rbp += 1
                        rsi_1 += 8
                        
                        if (rbp s>= *(arg1 + 0x1f8))
                            break
                
                return result
    else if (*(arg2 + 0x1e8) == result)
        if (sub_142a45d30(arg1 + 0x200, arg2 + 0x200).b != 0)
            result.b = 1
            return result
    else if (result != 0)
        goto label_142b5834a

result.b = 0
return result
